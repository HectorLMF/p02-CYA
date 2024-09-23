// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: FileManager.cc - implementación de la clase FileManager.
// Contiene la implementación de los métodos de la clase que gestiona la lectura
// y escritura de archivos.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#include "FileManager.h"

#include <fstream>
#include <sstream>
#include <stdexcept>

// Método estático que lee un archivo de entrada y devuelve un vector de pares
// (cadena, alfabeto)
std::vector<std::pair<std::string, std::string>> FileManager::readInputFile(
    const std::string& filename) {
  std::ifstream infile(filename);
  if (!infile.is_open()) {
    throw std::runtime_error("Error al abrir el archivo de entrada: " +
                             filename);
  }

  std::vector<std::pair<std::string, std::string>> input_data;
  std::string line;
  while (std::getline(infile, line)) {
    std::istringstream iss(line);
    std::string cadena, alfabeto;
    if (!(iss >> cadena >> alfabeto)) {
      throw std::runtime_error("Formato de archivo de entrada incorrecto.");
    }
    input_data.emplace_back(cadena, alfabeto);
  }

  infile.close();
  return input_data;
}

// Método estático que escribe un vector de resultados en un archivo de salida
void FileManager::writeOutputFile(const std::string& filename,
                                  const std::vector<std::string>& results) {
  std::ofstream outfile(filename, std::ios::app);  // Abrir en modo de adición
  if (!outfile.is_open()) {
    throw std::runtime_error("Error al abrir el archivo de salida: " +
                             filename);
  }

  for (const auto& result : results) {
    outfile << result << "\n";  // Escribe cada resultado en una línea
  }

  outfile.close();
}