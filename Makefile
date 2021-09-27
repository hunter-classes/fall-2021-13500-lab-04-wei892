
main: main.o box.o checkerboard.o cross.o lowertriangle.o upper.o trapezoid.o checkerboard.o
	g++ -o main main.o box.o checkerboard.o cross.o lowertriangle.o upper.o trapezoid.o checkerboard.o

main.o: main.cpp functions.h
	g++ -c main.cpp

box.o: box.cpp functions.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp functions.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp functions.h
	g++ -c cross.cpp

lowertriangle.o: lowertriangle.cpp functions.h
	g++ -c lowertriangle.cpp

upper.o: upper.cpp functions.h
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp functions.h
	g++ -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp functions.h
	g++ -c trapezoid.cpp


clean:
	rm -f main.o box.o checkerboard.o cross.o lowertriangle.o
