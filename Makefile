CC = g++
CFLAGS = -std=c++11 -pedantic -g -Wall -O3

INCLUDES = -I.
#LIBS=-lm add lib math


SRCS = Queen.cpp Board.cpp NaiveAlgorithm.cpp main.cpp
DEPS = Queen.hpp Board.hpp NaiveAlgorithm.hpp
OBJS = $(SRCS:.cpp=.o)

MAIN = main

.PHONY: depend clean
all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

depend: $(SRCS)
	makedepend $(INCLUDES) $^

.PHONY: clean

clean:
	rm -f *.o $(MAIN)
