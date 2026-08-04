CC = gcc
CXX = g++
CFLAGS = -std=c11 -O2 -lm -Wall -Wextra -Wpedantic -Wconversion -Werror=vla -pedantic-errors
CXXFLAGS = -std=c++98 -O2 -lm -Wall -Wextra -Wpedantic -Wconversion -Werror=vla -pedantic-errors

SOURCES_С = $(wildcard *.c)
SOURCES_CXX = $(wildcard *.cpp)
SOURCES_UML = $(shell find uml -name '*.puml')

TARGETS_C = $(SOURCES_С:.c=.out)
TARGETS_CXX = $(SOURCES_CXX:.cpp=.out)
TARGETS_UML = $(SOURCES_UML:.puml=.svg)

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

svg: $(TARGETS_UML)

# https://plantuml.com/ru/activity-diagram-beta
%.svg: %.puml
	java -jar ${HOME}/.local/bin/plantuml-1.2026.6.jar -tsvg $<

html: docs/cpp-1.html

%.html: %.md
	pandoc $< -o $@ --standalone --toc --mathml

docs/cpp-1.md: docs/template.md
	cd docs && ./docs.py

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
	rm -f *.o *.out docs/cpp-*.md docs/cpp-*.html uml/*.svg
