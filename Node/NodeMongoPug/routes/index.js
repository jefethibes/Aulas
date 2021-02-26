var express = require('express');
var csv = require("fast-csv");
var csvexpress = require('csv-express')
var router = express.Router();
var fs = require('fs');
var mongoose = require('mongoose');
var Produto = mongoose.model('Produto');
var csvfile = __dirname + "/../public/files/5. beer-consumption-sao-paulo.csv";
var stream = fs.createReadStream(csvfile);

const ObjectId = require("mongodb").ObjectID;

router.get('/', function (req, res, next) {
  res.render('index', { title: 'Importando arquivo CSV usando NodeJS.' });
})
.get('/import', function (req, res, next) {
  var produto = []
  var csvStream = csv()
    .on("data", function (data) {
      var item = new Produto({
        Data: data[0],
        Temperatura_Media_C: data[1],
        Temperatura_Minima_C: data[2],
        Temperatura_Maxima_C: data[3],
        Precipitacao_mm: data[4],
        Final_de_Semana: data[5],
        Consumo_de_cerveja_litros: data[6]
      });
      item.save(function (error) {
        console.log(item);
        if (error) {
          throw error;
        }
      });
    }).on("end", function () {
      console.log(" Fim do arquivo de importação.");
    });
  stream.pipe(csvStream);
  res.json({ success: "Os dados foram importados com sucessos.", status: 200 });
})
  
  .get('/fetchdata', function (req, res, next) {

    Produto.find({}, function (err, docs) {

      if (!err) {

        res.json({ success: "Atualização finalizada.", status: 200, data: docs });

      } else {

        throw err;

      }

    });

  })

  .get('/export', function (req, res, next){
    var filename = "produto_exportado.csv";
    var dataArray;
    Produto.find().lean().exec({}, function(err, produto){
      if(err)res.send(err);
      res.statusCode = 200;
      res.setHeader('Content-Type', 'text/csv');
      res.setHeader("Content-Disposition", 'attachment; filename=' + filename);
      res.csv(produto, true);
      console.log(produto);
      console.log("Os dados foram exportados com sucesso!");
    });
  })
  
  .get('/delete/:id', function(req, res, next){
    var id = req.params.id;

    Produto.remove({_id: ObjectId(id)}, (err, result) => {
      if(err) return res.send(500, err)
      console.log('Deletado com sucesso!')
      res.redirect("/")
    })
  });
  
  router.get('/edit/:id', function(req, res){
    Produto.findById(req.params.id, function(err, article){
      res.render('edit', {
        article: article
      });
    });
  })
  
  .post('/edit/:id', function(req, res, next){
    let article = {};
    article.Data = req.body.Data;
    article.Temperatura_Media_C = req.body.Temperatura_Media_C;
    article.Temperatura_Minima_C = req.body.Temperatura_Minima_C;
    article.Temperatura_Maxima_C = req.body.Temperatura_Maxima_C;
    article.Precipitacao_mm = req.body.Precipitacao_mm;
    article.Final_de_Semana = req.body.Final_de_Semana;
    article.Consumo_de_cerveja_litros = req.body.Consumo_de_cerveja_litros;
  
    let query = {_id: req.params.id};
    
    console.log(article)
    Produto.update(query, article, function(err){
      if(err) {
        console.error(err);
        return;
      } else {
        res.redirect('/');
      }
    })
  });
  
  router.get('/add', function(req, res){
    res.render('add', {
      title: 'Inserir Dados:'
    });
  })
  
  .post('/add', function(req, res, next){
      let article = new Produto();
      article.Data = req.body.Data;
      article.Temperatura_Media_C = req.body.Temperatura_Media_C;
      article.Temperatura_Minima_C = req.body.Temperatura_Minima_C;
      article.Temperatura_Maxima_C = req.body.Temperatura_Maxima_C;
      article.Precipitacao_mm = req.body.Precipitacao_mm;
      article.Final_de_Semana = req.body.Final_de_Semana;
      article.Consumo_de_cerveja_litros = req.body.Consumo_de_cerveja_litros;
  
      article.save(function(err){
        if(err) {
          console.error(err);
          return;
        } else {
          res.redirect('/');
        }
      });
    });


module.exports = router;