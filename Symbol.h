// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: Symbol.h - definición de la clase Symbol.
// Contiene la definición de la clase que representa símbolos en el
// procesamiento de cadenas.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#ifndef SYMBOL_H
#define SYMBOL_H

class Symbol {
 public:
  Symbol(char symbol);
  char getSymbol() const;

  bool operator<(const Symbol& other) const {
    return symbol < other.getSymbol();  // Comparar caracteres
  }

 private:
  char symbol;
};

#endif  // SYMBOL_H
