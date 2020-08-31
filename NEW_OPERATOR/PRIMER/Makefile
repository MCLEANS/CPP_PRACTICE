CC = g++
CFLAGS = -c --std=c++17
LFLAGS = -Wall
OBJS = main.o
OBJS += student.o

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o: main.cpp student.h
	$(CC) $(CFLAGS) main.cpp

student.o: student.cpp student.h
	$(CC) $(CFLAGS) student.cpp

clean: 
	rm *.o main

run:
	./main
