// flight-reserve.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Seat.h"
#include "Flight.h"

using namespace std;

int main()
{
	cout << "Welcome to Filght reserver System!" << endl;
	Seat * a = new Seat("2B");
	cout << " a new seat " << a->getSeat() << endl;
	for (int i = 0; i < 2; i++) {
		if (a->bookSeat())
			cout << "this seat is booked successfully" << endl;
		else
			cout << "this seat has been booked already." << endl;
	}
	Flight flight("CA080","YXZ","BKE");
	cout << "we have a flight: " << flight << endl;
	//getchar();
    return 0;
}

