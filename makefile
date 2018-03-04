#Makefile for Text_Count

INCLUDE_PATH = $(CURDIR)
OBJECTS = Counter.o counting.o help.o
EXE = Text_Counter

all : objects
	$(info Finishing ...)
	@g++ main.o -o $(EXE) $(OBJECTS)
	@rm *.o
	$(info Done.)

objects:
	$(info BUILDING OBJECTS ...)
	@g++ -c Counter.cpp -I$(INCLUDE_PATH)
	@g++ -c counting.cpp -I$(INCLUDE_PATH)
	@g++ -c help.cpp -I$(INCLUDE_PATH)
	@g++ -c main.cpp -I$(INCLUDE_PATH)
