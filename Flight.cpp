#include "Flight.h"
#include <iostream>
#include <vector>

Flight::Flight(string id, string originCity, string destinationCity) :
	flightID(id), origin(originCity),
	destination(destinationCity)
{
	seats = vector<Seat*>();
}

Flight::~Flight()
{
	if (seats.size()) {
		seats.erase(seats.begin(), seats.end());
	}
}

vector<Seat*> 
Flight::getSeats() { return vector<Seat *>(); }

vector<Seat*> 
Flight::getAvaliableSeat() { return vector<Seat *>(); }

//this does not belongs to Flight, so no Flight::
ostream & operator<< (ostream & os, const Flight &f) {
	os << "FlightID: " << f.getFlightID()
		<< ", Origin: " << f.getOrigin()
		<< ",Destination " << f.getDestination();
	return os;
}

