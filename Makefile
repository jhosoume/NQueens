CC = g++
CFLAGS = -std=c++11 -pedantic -g -Wall -O3

INCLUDES = -I.
#LIBS=-lm add lib math


SRCS_NAIVE = Queen.cpp Board.cpp NaiveAlgorithm.cpp Auxiliary.cpp main_nv.cpp
SRCS_SQ = Queen.cpp Board.cpp SingleQueenAlgorithm.cpp Auxiliary.cpp main_sq.cpp
DEPS = Queen.hpp Board.hpp NaiveAlgorithm.hpp SingleQueenAlgorithm.hpp Auxiliary.hpp
OBJS_NAIVE = $(SRCS_NAIVE:.cpp=.o)
OBJS_SQ = $(SRCS_SQ:.cpp=.o)

NAIVE = naive
SQ = sq

.PHONY: depend clean
all: $(NAIVE) $(SQ)

$(NAIVE): $(OBJS_NAIVE)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAIVE) $(OBJS_NAIVE)

$(SQ): $(OBJS_SQ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(SQ) $(OBJS_SQ)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

depend: $(SRCS_NAIVE) $(SRCS_SQ)
	makedepend $(INCLUDES) $^

.PHONY: clean

clean:
	rm -f *.o $(NAIVE) $(SQ)
