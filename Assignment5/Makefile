PROJECT = main_program
LIBPROJECT = lib$(PROJECT).a

CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++14 -Wall -Werror -Wpedantic -pthread -g -fPIC
LXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)
LGTESTFLAGS = $(LXXFLAGS) -lgtest -lgtest_main -lpthread

MAIN_SOURCES = main.cpp Autobot.cpp Decepticon.cpp Effect.cpp Weapon.cpp Transformer.cpp
MAIN_OBJECTS = $(MAIN_SOURCES:.cpp=.o)

HEADERS = $(wildcard *.h)

.PHONY: default all clean cleanall

default: all

all: $(PROJECT)

%.o: %.cpp $(HEADERS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(MAIN_OBJECTS)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LXXFLAGS)

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT) $(LIBPROJECT)
