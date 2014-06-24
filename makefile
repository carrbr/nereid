export
CC=gcc
CXX=g++
CPPFLAGS=-Wall -std=c++11
BASEDIR := ${CURDIR}
INC=-I/$(BASEDIR)/inc -I/$(BASEDIR)/br_assert
SRCDIR=$(BASEDIR)/src
OBJDIR=$(BASEDIR)/obj
SOURCES := $(notdir $(shell find $(SRCDIR) -name '*.cpp'))
OBJECTS=$(SOURCES:.cpp=.o)

all:
	cd obj; make all
check:
	echo "IMPLEMENT ME!"
clean:
	rm nereid
	cd obj; make clean
install:
	echo "IMPLEMENT ME!"
