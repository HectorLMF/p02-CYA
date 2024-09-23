# Variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Archivos fuente y ejecutable
SRCS = main.cc FileManager.cc StringProcessor.cc Alphabet.cc Symbol.cc
TARGET = p02_strings

# Regla por defecto
all: $(TARGET)

# Compilación del ejecutable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Limpieza
clean:
	rm -f $(TARGET)

.PHONY: all clean
