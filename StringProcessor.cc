// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: StringProcessor.cc - implementación de la clase StringProcessor.
// Contiene la implementación de los métodos de la clase que procesa cadenas de
// texto.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#include "StringProcessor.h"

#include <algorithm>
#include <sstream>

// Constructor que inicializa la cadena y el alfabeto
StringProcessor::StringProcessor(const std::string& cadena_,
                                 const Alphabet& alfabeto_)
    : cadena(cadena_), alfabeto(alfabeto_) {}

std::string StringProcessor::getAlphabet() const {
  std::ostringstream os;
  os << alfabeto.toString();  // Usamos la sobrecarga del operador <<
  return os.str();
}

// Método que devuelve la longitud de la cadena
int StringProcessor::getLength() const { return cadena.length(); }

// Método que devuelve la cadena invertida
std::string StringProcessor::reverseString() const {
  std::string reversed = cadena;
  std::reverse(reversed.begin(), reversed.end());  // Invierte la cadena
  return reversed;
}

// Método que devuelve los prefijos de la cadena
std::string StringProcessor::getPrefixes() const {
  std::string result = "{&";
  for (size_t i = 1; i <= cadena.length(); ++i) {
    result += ", " + cadena.substr(0, i);  // Añade cada prefijo a la salida
  }
  result += "}";
  return result;
}

// Método que devuelve los sufijos de la cadena
std::string StringProcessor::getSuffixes() const {
  std::string result = "{&";  // Inicia con el sufijo vacío
  for (size_t i = cadena.length(); i > 0; --i) {
    result +=
        ", " + cadena.substr(i - 1);  // Añade cada sufijo en orden inverso
  }
  result += "}";
  return result;
}
