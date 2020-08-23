CC = g++
CFLAGS = -c -g -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o 
OBJS+= student.o


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

student.o: student.cpp student.h
	$(CC) $(CFLAGS) student.cpp 

run: main
	./main

clean: 
	rm main *.o