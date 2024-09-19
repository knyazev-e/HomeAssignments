CXX = g++
TARGET = hello
SRCS = main.cpp function.cpp

$(TARGET): $(SRCS)
	$(CXX) -o $(TARGET) $(SRCS)

