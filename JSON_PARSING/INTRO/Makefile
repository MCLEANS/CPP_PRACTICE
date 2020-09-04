CC = g++
CFLAGS = -c -Wall --std=c++11 -I./nlohmann
LFLAGS = -Wall
OBJS = main.o 


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

run: 
	./main

clean:
	rm *.o main

