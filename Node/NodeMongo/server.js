const express = require("express");
const app = express();
const bodyParser = require("body-parser");
var path = __dirname + "/views/";

const ObjectId = require("mongodb").ObjectID;
const MongoClient = require("mongodb").MongoClient;
///const uri = "mongodb://localhost:27017/admin";
const uri = "mongodb+srv://jeferson:1234@cluster0-7uc8o.mongodb.net/test?retryWrites=true&w=majority"
app.use(bodyParser.urlencoded({ extended: true }));

MongoClient.connect(uri, (err, client) => {
    if (err) return console.log(err);
    db = client.db("cesusc");
    app.listen(3000, () => {
        console.log("Servidor está rodando na porta 3000.");
    });
});

app.set("view engine", "ejs");

app
    .route("/")
    .get(function (req, res) {
        const cursor = db.collection("data").find();
        res.render("index.ejs");
    })

    .post((req, res) => {
        db.collection("data").save(req.body, (err, result) => {
            if (err) return console.log(err);

            console.log("Dados gravados com sucesso.");
            res.redirect("/show");
        });
    });

app.route("/show").get((req, res) => {
    db.collection("data")
        .find()
        .toArray((err, results) => {
            if (err) return console.log(err);
            res.render("show.ejs", { data: results });
        });
});

app.route("/showContact").get((req, res) => {
    db.collection("contact")
        .find()
        .toArray((err, results) => {
            if (err) return console.log(err);
            res.render("showContact.ejs", { data: results });
        });
});

app.route("/contact")
    .get(function (req, res) {
    res.render("contact.ejs");
    //res.sendFile(path + "contact.html");
    })
    .post((req, res) => {
        var nome = req.body.name;
        var email = req.body.email;
        var mensagem = req.body.message;
        var validacao = req.body.human;

        if(validacao == 5){
            db.collection("contact").insertOne(
                {
                    
                    nome: nome,
                    email: email,
                    mensagem: mensagem,
                    
                },
                (err, result) => {
                    if (err) return res.send(err);
                    res.redirect("/showContact");
                    console.log("Dados atualizados com sucesso.");
                }
            );
        } else{
            alert("Erro ao conectar!!!");
        }
});

app
    .route("/edit/:id")
    .get((req, res) => {
        var id = req.params.id;

        db.collection("data")
            .find(ObjectId(id))
            .toArray((err, result) => {
                if (err) return res.send(err);
                res.render("edit.ejs", { data: result });
            });
    })
    .post((req, res) => {
        var id = req.params.id;
        var nome = req.body.nome;
        var sobrenome = req.body.sobrenome;

        db.collection("data").updateOne(
            { _id: ObjectId(id) },
            {
                $set: {
                    nome: nome,
                    sobrenome: sobrenome
                }
            },
            (err, result) => {
                if (err) return res.send(err);
                res.redirect("/show");
                console.log("Dados atualizados com sucesso.");
            }
        );
    });

app
    .route("/editContact/:id")
    .get((req, res) => {
        var id = req.params.id;

        db.collection("contact")
            .find(ObjectId(id))
            .toArray((err, result) => {
                if (err) return res.send(err);
                res.render("editContact.ejs", { data: result });
            });
    })
    .post((req, res) => {
        var id = req.params.id;
        var nome = req.body.nome;
        var email = req.body.email;
        var mensagem = req.body.mensagem;

        db.collection("contact").updateOne(
            { _id: ObjectId(id) },
            {
                $set: {
                    nome: nome,
                    email: email,
                    mensagem: mensagem
                }
            },
            (err, result) => {
                if (err) return res.send(err);
                res.redirect("/showContact");
                console.log("Dados atualizados com sucesso.");
            }
        );
    });

app.route("/delete/:id").get((req, res) => {
    var id = req.params.id;
    db.collection("data").deleteOne({ _id: ObjectId(id) }, (err, result) => {
        if (err) return res.send(500, err);
        console.log("Dado excluído com sucesso.");
        res.redirect("/show");
    });
});

app.route("/deleteContact/:id").get((req, res) => {
    var id = req.params.id;
    db.collection("contact").deleteOne({ _id: ObjectId(id) }, (err, result) => {
        if (err) return res.send(500, err);
        console.log("Dado excluído com sucesso.");
        res.redirect("/showContact");
    });
});

app.use("*", function (req, res) {
    res.sendFile(path + "404.html");
});
