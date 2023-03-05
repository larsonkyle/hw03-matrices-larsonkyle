CC=g++

all: hw03

hw03: hw03.cpp matrix.o matrix.h
	$(CC) hw03.cpp -o hw03 matrix.o

matrix.o: matrix.cpp matrix.h
	$(CC) -c matrix.cpp -o matrix.o

clean:
	rm -f *.o all
