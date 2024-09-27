hello: main.cpp function.cpp
	g++ -o hello main.cpp function.cpp

clean:
	rm -f hello  *.o



