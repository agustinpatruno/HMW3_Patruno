CXX = g++
CXXFLAGS = -Iincludes -std=c++17 -Wall

SRC = $(wildcard sources/*.cpp)
MAIN = examples/main.cpp
BIN = programa1

all:
	clear
	$(CXX) $(CXXFLAGS) $(SRC) $(MAIN) -o $(BIN)
	./$(BIN)
clean:
	rm -f $(BIN)
