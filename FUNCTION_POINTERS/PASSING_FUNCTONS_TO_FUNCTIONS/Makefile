CC = g++
CFLAGS = -c -Wall --std=c++17
LFAGS = -Wall
OBJS = main.o 

all: $(OBJS)
	$(CC) $(LFAGS) $(OBJS) -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean: 
	rm *.o main

run: 
	./main