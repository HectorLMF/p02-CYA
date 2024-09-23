// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: alphabet.h - definición de la clase Alphabet.
// Contiene la definición de la clase que gestiona el alfabeto de caracteres.
// Referencias:
// Enlaces de interés
//
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#ifndef ALPHABET_H
#define ALPHABET_H

#include <set>
#include <sstream>  // Agregado para std::ostringstream
#include <string>
#include <vector>

#include "Symbol.h"

class Alphabet {
 public:
  Alphabet(const std::string& symbols_);   // Constructor
  std::vector<Symbol> getSymbols() const;  // Obtener símbolos
  std::string toString() const;            // Convertir a string

 private:
  std::set<Symbol> symbols;  // Conjunto de símbolos
};

#endif  // ALPHABET_H
