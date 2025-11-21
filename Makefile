CXX = g++
CXXFLAGS = -std=c++17 -O2 -Iinclude

SRC = $(wildcard src/*.cpp) \
      $(wildcard src/plugins/visitor/*.cpp)

OBJ = $(SRC:.cpp=.o)

BIN = bin/interpreter

all: $(BIN)

$(BIN): $(OBJ)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -rf $(OBJ) $(BIN)
