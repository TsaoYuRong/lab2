main6:main6.o timer6.o
	g++ -o main6.o timer6.o

main6.o:main6.cpp timer6.h
	g++ -c main6.cpp

timer6.o:timer6.cpp timer6.h
	g++ -c timer6.cpp

