CC = g++
SOURCES = main.cpp prefix.cpp unit_test.cpp

all: main unit_test

main: 
	$(CC) main.cpp prefix.cpp  -std=c++14 -o main

unit_test:
	$(CC) unit_test.cpp prefix.cpp  -std=c++14 -o unit_test

clean: 
	rm -rf main unit_test
