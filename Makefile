
main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o

main.o: main.cpp functions.h
	g++ -c main.cpp

box.o: box.cpp functions.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp functions.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp functions.h
	g++ -c cross.cpp

lower.o: lower.cpp functions.h
	g++ -c lower.cpp

upper.o: upper.cpp functions.h
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp functions.h
	g++ -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp functions.h
	g++ -c checkerboard3x3.cpp


clean:
	rm -f main.o box.o checkerboard.o cross.o lowertriangle.o
