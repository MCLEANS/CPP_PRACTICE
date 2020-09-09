CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o
OBJS += vehicle.o

all:	$(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o:	main.cpp
	$(CC) $(CFLAGS) main.cpp

vehicle.o: vehicle.cpp vehicle.h
	$(CC) $(CFLAGS) vehicle.cpp

run:
	./main

clean:
	rm *.o main
