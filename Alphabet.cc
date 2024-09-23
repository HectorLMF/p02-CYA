// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: alphabet.cc - implementación de la clase Alphabet.
// Contiene la implementación de los métodos de la clase que gestiona el
// alfabeto de caracteres. Referencias: Enlaces de interés
//
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#include "Alphabet.h"

// Constructor que inicializa el alfabeto a partir de una cadena de símbolos
Alphabet::Alphabet(const std::string& symbols_) {
  for (char c : symbols_) {
    symbols.insert(Symbol(c));  // Insertar símbolos en el conjunto
  }
}

// Devuelve los símbolos del alfabeto como un vector de símbolos
std::vector<Symbol> Alphabet::getSymbols() const {
  return std::vector<Symbol>(symbols.begin(), symbols.end());
}

// Método que devuelve el alfabeto como un string formateado
std::string Alphabet::toString() const {
  std::ostringstream os;
  os << "{ ";
  for (const auto& symbol : symbols) {
    os << symbol.getSymbol() << " ";
  }
  os << "}";
  return os.str();
}