CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -Wpedantic -Wconversion -std=c11 -O2
CXXFLAGS = -Wall -Wextra -Wpedantic -Wconversion -std=c++98 -O2

SOURCES_С = $(wildcard *.c)
SOURCES_CXX = $(wildcard *.cpp)

TARGETS_C = $(SOURCES_С:.c=.out)
TARGETS_CXX = $(SOURCES_CXX:.cpp=.out)

TESTS_C = $(SOURCES_С:.c=.test)
TESTS_CXX = $(SOURCES_CXX:.cpp=.test)

all: $(TARGETS_C) $(TARGETS_CXX)

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

%.out: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

test: $(TESTS_C) $(TESTS_CXX)

%.test: %.out tests/%.stdin tests/%.stdout
	./$*.out < tests/$*.stdin | diff - tests/$*.stdout || exit 1

01-1-hello.out: 01-1-hello.c
	echo -n
01-2-hello.out: 01-2-hello.cpp
	echo -n
01-3-warnings.out: 01-3-warnings.cpp
	echo -n
01-1-hello.test: 01-1-hello.c
	echo -n
01-2-hello.test: 01-2-hello.cpp
	echo -n
01-3-warnings.test: 01-3-warnings.cpp
	echo -n

clean:
	rm -f *.o *.out
