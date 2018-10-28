#include "Seat.h"
#include <iostream>

using namespace std;

bool
Seat::bookSeat() { 
	if (avaliabe) {
		avaliabe = false;
		return true;
	}
	//		cout << "this seat has been booked already." << endl;
	return false;
}
