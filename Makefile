BIN=hft.bin
CXXFLAGS=-Iinclude/
LDFLAGS=-lcurl
SRC=$(wildcard src/*.cpp)


.PHONY: all
all:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(SRC) -o $(BIN)	

.PHONY: clean
clean:
	$(RM) $(BIN) 
