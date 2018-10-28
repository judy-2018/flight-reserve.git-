#  Makefile for flight booking system
#GOOGLETESTLIB   = /usr/lib
#GOOGLETESTINCLUDE =/usr/include/gtest
#INCS	        = -I$GOOGLETESTINCLUDE
#LIBS  		= -L$GOOGLETESTLIB
CXX		= g++ 
CFILES		= Flight.cpp Seat.cpp flight-reserve.cpp 
OFILES		= flight-reserve.o Flight.o  Seat.o
DFLAGS		= -ggdb -std=c++14
CFLAGS		= $(DFLAGS) # -DUSE_TEMPLATES -D__INLINE__ -DUSE_EXCEPTIONS

#############################################################################
# C++ directives

.SUFFIXES: .cpp
.cpp.o:
	$(CXX) $(CFLAGS) -c $<
#############################################################################

main: $(OFILES)
	$(CXX) $(CFLAGS) -o $@ $(OFILES) $(LIBS) #$(INCS) -lgtest -lpthread

clean:
	-/bin/rm -f *.o *.out *~ core

realclean: clean 
	-/bin/rm -fr main Templates.DB

depend:
	g++dep -f Makefile $(CFILES)
# DO NOT DELETE THIS LINE -- g++dep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY

Flight.o: Flight.h Flight.cpp
Seat.o: Seat.h Seat.cpp
flight-reserve.o: flight-reserve.cpp Seat.h Seat.cpp Flight.cpp Flight.h 

# IF YOU PUT ANYTHING HERE IT WILL GO AWAY

