#Makefile for Text_Count

INCLUDE_PATH = $(CURDIR)
OBJECTS = Counter.o counting.o help.o
WINLIB = -static-libstdc++ -static-libgcc
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

windows-objects:
	$(info BUILDING OBJECTS ...)
	@x86_64-w64-mingw32-g++ -c Counter.cpp -I$(INCLUDE_PATH)
	@x86_64-w64-mingw32-g++ -c counting.cpp -I$(INCLUDE_PATH)
	@x86_64-w64-mingw32-g++ -c help.cpp -I$(INCLUDE_PATH)
	@x86_64-w64-mingw32-g++ -c main.cpp -I$(INCLUDE_PATH)

windows : windows-objects
	$(info Finishing ...)
	@x86_64-w64-mingw32-g++ main.o -o $(EXE).exe $(OBJECTS) $(WINLIB)
	@rm *.o
	$(info Done.)
