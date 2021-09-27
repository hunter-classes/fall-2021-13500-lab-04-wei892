
main: main.o box.o checkerboard.o cross.o
	g++ -o main main.o box.o checkerboard.o cross.o

main.o: main.cpp functions.h
	g++ -c main.cpp

box.o: box.cpp functions.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp functions.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp functions.h
	g++ -c cross.cpp

clean:
	rm -f main.o box.o checkerboard.o cross.o
