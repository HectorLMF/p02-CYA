// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: StringProcessor.h - definición de la clase StringProcessor.
// Contiene la definición de la clase que procesa cadenas de texto.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#ifndef STRING_PROCESSOR_H
#define STRING_PROCESSOR_H

#include <string>

#include "Alphabet.h"

// Clase que se encarga de procesar cadenas de texto y realizar varias
// operaciones
class StringProcessor {
 public:
  // Constructor: inicializa con una cadena y su alfabeto
  StringProcessor(const std::string& cadena_, const Alphabet& alfabeto_);

  // Devuelve el alfabeto de la cadena como un string formateado
  std::string getAlphabet() const;

  // Devuelve la longitud de la cadena
  int getLength() const;

  // Devuelve la cadena invertida
  std::string reverseString() const;

  // Devuelve los prefijos de la cadena en un formato adecuado
  std::string getPrefixes() const;

  // Devuelve los sufijos de la cadena en un formato adecuado
  std::string getSuffixes() const;

 private:
  std::string cadena;  // La cadena a procesar
  Alphabet alfabeto;   // El alfabeto asociado a la cadena
};

#endif
