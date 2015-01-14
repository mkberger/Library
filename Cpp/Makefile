PATH := /usr/um/gcc-4.7.0/bin:$(PATH)
LD_LIBRARY_PATH := /usr/um/gcc-4.7.0/lib64
LD_RUN_PATH := /usr/um/gcc-4.7.0/lib64

CFLAGS = -c -Wall -Wextra -Wvla -pedantic -std=c++11
LFLAGS = -O3

PROJ_OBJ = OtherCppClass.o CppClass.o
PROJ_EX = projectExec

CppClass.o: CppClass.cpp CppClass.h OtherCppClass.h
	g++ $(CFLAGS) $(LFLAGS) CppClass.cpp
	
OtherCppClass.o: OtherCppClass.cpp OtherCppClass.h
	g++ $(CFLAGS) $(LFLAGS) OtherCppClass.cpp
	
all: $(PROJ_OBJ)

exec: $(PROJ_OBJ)
	g++ $(LFLAGS) $(PROJ_OBJ) -o $(PROJ_EX)
	
run:
	./projectExec 0 1 2
	
clean:
	rm -rf *.o $(PROJ_EX) 
