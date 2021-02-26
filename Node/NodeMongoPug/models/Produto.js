var mongoose = require('mongoose');
var Schema = mongoose.Schema;
var produtoSchema = new Schema({
    Data: { type: String},
    Temperatura_Media_C: { type: String },
    Temperatura_Minima_C: { type: String },
    Temperatura_Maxima_C: { type: String },
    Precipitacao_mm: { type: String },
    Final_de_Semana: { type: String },
    Consumo_de_cerveja_litros: { type: String }
});
module.exports = mongoose.model('Produto', produtoSchema);