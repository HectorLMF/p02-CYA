// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: FileManager.h - definición de la clase FileManager.
// Contiene la definición de la clase que gestiona la lectura y escritura de
// archivos.
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <string>
#include <vector>

// Clase que gestiona la lectura y escritura de archivos
class FileManager {
 public:
  // Lee las cadenas y alfabetos desde un archivo de entrada
  static std::vector<std::pair<std::string, std::string>> readInputFile(
      const std::string& filename);

  // Escribe el resultado en un archivo de salida
  static void writeOutputFile(const std::string& filename,
                              const std::vector<std::string>& results);
};

#endif
