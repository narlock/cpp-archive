CC=g++
CPPFLAGS=--std=c++17 -Wall -pedantic

all: Rectangle.o Triangle.o Circle.o Square.o Main.o
		$(CC) $(CPPFLAGS) Rectangle.o Triangle.o Circle.o Square.o Main.o

Rectangle.o: Rectangle.cc
		$(CC) $(CPPFLAGS) -c Rectangle.cc

Triangle.o: Triangle.cc
		$(CC) $(CPPFLAGS) -c Triangle.cc

Circle.o: Circle.cc
		$(CC) $(CPPFLAGS) -c Circle.cc

Square.o: Square.cc
		$(CC) $(CPPFLAGS) -c Square.cc

Main.o: Main.cc
		$(CC) $(CPPFLAGS) -c Main.cc

clean:
		rm -f *.o *.exe *.out