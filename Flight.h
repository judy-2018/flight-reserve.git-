#ifndef FLIGHT_H
#define FLIGHT_H

#include <vector>
#include <string>
#include "Seat.h"

class Flight
{
public:
	Flight(string id, string originCity, string destinationCity);
	~Flight();
	string getFlightID() const { return  flightID;  }
	string getOrigin() const { return origin; }
	string getDestination() const { return destination; }
	vector<Seat*> getSeats();
	vector<Seat*> getAvaliableSeat();
	friend ostream & operator<< (ostream & os, const Flight &f);
private:
	vector<Seat*> seats;
	//int numRows;
	//int firstRow;
	string flightID;
	string origin;
	string destination;
};

#endif /*FLIGHT_H*/
