run: main.o
	g++ main.o -o run

main.o: calc.cpp
	g++ -c calc.cpp -o main.o

clean:
	rm -f run *.o
