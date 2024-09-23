// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Cadenas y lenguajes
// Autor: Héctor Luis Mariño Fernández
// Correo: alu0100595604@ull.edu.es
// Fecha: 17/09/2024
// Archivo: main.cc - programa cliente.
// Contiene la función main del proyecto que utiliza las clases Alphabet y
// FileManager para gestionar cadenas de texto y archivos. //
// Historial de revisiones
// 17/09/2024 - Creación (primera versión) del código

#include <iostream>
#include <vector>

#include "Alphabet.h"
#include "FileManager.h"
#include "StringProcessor.h"

void printHelp() {
  std::cout << "Modo de empleo: ./p02_strings filein.txt fileout.txt opcode\n";
  std::cout << "Opcodes:\n";
  std::cout << "1 - Alfabeto\n";
  std::cout << "2 - Longitud\n";
  std::cout << "3 - Inversa\n";
  std::cout << "4 - Prefijos\n";
  std::cout << "5 - Sufijos\n";
}

int main(int argc, char* argv[]) {
  // Comprobación de los parámetros de entrada
  if (argc != 4) {
    if (argc == 2 && std::string(argv[1]) == "--help") {
      printHelp();
      return 0;
    }
    std::cerr << "Error: número de argumentos incorrecto.\n";
    printHelp();
    return 1;
  }

  std::string input_file = argv[1];
  std::string output_file = argv[2];
  int opcode = std::stoi(argv[3]);

  try {
    // Lee las cadenas y alfabetos del archivo de entrada
    auto input_data = FileManager::readInputFile(input_file);
    std::vector<std::string> results;

    // Procesa cada cadena según el opcode
    for (const auto& [cadena, alfabeto_str] : input_data) {
      Alphabet alfabeto(alfabeto_str);  // Crea el alfabeto
      StringProcessor processor(cadena, alfabeto);
      switch (opcode) {
        case 1:
          results.push_back("Alfabeto: " + processor.getAlphabet());
          break;
        case 2:
          results.push_back("Longitud: " +
                            std::to_string(processor.getLength()));
          break;
        case 3:
          results.push_back("Inversa: " + processor.reverseString());
          break;
        case 4:
          results.push_back("Prefijos: " + processor.getPrefixes());
          break;
        case 5:
          results.push_back("Sufijos: " + processor.getSuffixes());
          break;
        default:
          std::cerr << "Error: Opcode inválido.\n";
          printHelp();
          return 1;
      }
    }

    // Escribe los resultados en el archivo de salida
    FileManager::writeOutputFile(output_file, results);

  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << '\n';
    return 1;
  }

  return 0;
}
