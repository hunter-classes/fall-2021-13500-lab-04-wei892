
main: main.o box.o checkerboard.o
	g++ -o main main.o box.o checkerboard.o

main.o: main.cpp functions.h
	g++ -c main.cpp

box.o: box.cpp functions.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp functions.h
	g++ -c checkerboard.cpp

clean:
	rm -f main.o box.o checkerboard.o
