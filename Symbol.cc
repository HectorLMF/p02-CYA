// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: Symbol.cc - implementación de la clase Symbol.
// Contiene la implementación de los métodos de la clase que representa símbolos
// en el procesamiento de cadenas.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#include "Symbol.h"

// Constructor que inicializa el símbolo
Symbol::Symbol(char symbol) : symbol(symbol) {}

// Getter para obtener el símbolo
char Symbol::getSymbol() const { return symbol; }
