CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic -g -I. -pthread
LDFLAGS = -lgtest -lgtest_main -lpthread

TEST_SOURCE = test.cpp
TEST_EXECUTABLE = tests
HEADERS = Classes.h Template.h

all: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_SOURCE) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(TEST_SOURCE) $(LDFLAGS) -o $@
clean:
	rm -rf $(TEST_EXECUTABLE) *.o
