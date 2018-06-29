#-----------------------------------------------------------------------------
# File:    Makefile 
# Purpose: To build 'main' which is a program to convert between Roman, Greek
#          Indian, and Hebrew number and weight systems
# Authors: Rodger Swann 
#-----------------------------------------------------------------------------


#-----------------
# Set the compiler
#-----------------
CXX=g++

#-----------------------
# Specify compiler flags
#-----------------------
CXXFLAGS=-g --std=c++0x

#---------------
# Set the Linker
#---------------
LD=g++

#----------------------------------------------
# Make variable which stores my list of targets
#----------------------------------------------
targets=main

#--------------------------------------------------------------------
# The 'main'executable depends on the object files:
# main.o , menu.o , roman.o , greek.o , hebrew.o
#
# So the 'main' executable "depends" on the object files
# And each object "depends" on source and header files 
#--------------------------------------------------------------------

#--------------------------------------------------------------------
# This says main depends on:
# main.o, menu.o, roman.o, greek.o, and hebrew.o
#--------------------------------------------------------------------
# main: main.o menu.o roman.o greek.o hebrew.o
	#$(CXX) $(CXXFLAGS) -o main main.o menu.o roman.o greek.o hebrew.o


#--------------------------------------------------------------------
# This says main depends one main.o, menu.o, and roman.o
#--------------------------------------------------------------------
main: main.o menu.o roman.o greek.o 
	$(CXX) $(CXXFLAGS) -o main main.o menu.o roman.o greek.o

#--------------------------------------------------------------------
# This says the main object file depends on main.cpp
#--------------------------------------------------------------------
main.o:  main.cpp 
	$(CXX) $(CXXFLAGS) -c main.cpp 

#--------------------------------------------------------------------
# This says menu object files depends on menu.cpp and menu.h 
#--------------------------------------------------------------------
menu.o:  menu.cpp menu.h
	$(CXX) $(CXXFLAGS) -c menu.cpp

#--------------------------------------------------------------------
# This says the roman object file depends on roman.cpp and roman.h 
#--------------------------------------------------------------------
roman.o: roman.cpp roman.h
	$(CXX) $(CXXFLAGS) -c roman.cpp

#--------------------------------------------------------------------
# This says the greek object file depends on greek.cpp and greek.h 
#--------------------------------------------------------------------
greek.o: greek.cpp greek.h
	$(CXX) $(CXXFLAGS) -c greek.cpp

#--------------------------------------------------------------------
# This says the greek object file depends on hebrew.cpp and hebrew.h
#--------------------------------------------------------------------
#hebrew.o: hebrew.cpp hebrew.h
#	$(CXX) $(CXXFLAGS) -c hebrew.cpp 


#recipe which builds all the targets
all: $(targets)


#make a target which deletes the binaries
clean:
	rm -f $(targets) *.core *.o a.out
