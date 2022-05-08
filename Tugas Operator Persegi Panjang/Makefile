CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I.
SOURCES=$(wildcard src/*.cpp)

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

Engine-Start: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^
