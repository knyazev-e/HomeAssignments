
hello: func.o prog.o
	g++ func.o prog.o -o hello

func.o: function.cpp
	g++ -c function.cpp -o func.o

prog.o: main.cpp
	g++ -c main.cpp -o prog.o

clean:
	rm -f hello *.o



