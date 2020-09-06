CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o auth.o cookies.o cprtypes.o curl_container.o curlholder.o error.o multipart.o parameters.o payload.o proxies.o session.o timeout.o unix_socket.o util.o
DEP_SOURCES = auth.cpp cookies.cpp cprtypes.cpp curl_container.cpp curlholder.cpp error.cpp multipart.cpp parameters.cpp payload.cpp proxies.cpp session.cpp timeout.cpp unix_socket.cpp util.cpp



all:	$(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o  main  -lcurl

main.o:	main.cpp
	$(CC) $(CFLAGS) main.cpp $(DEP_SOURCES)

clean:	
	rm *.o main

run:	
	./main
