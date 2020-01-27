all:
	flex -o speech.cc speech.l
	g++ -o speech.o speech.cc -c
	g++ -o entry.o entry.cpp -c
	g++ -o speech entry.o speech.o
