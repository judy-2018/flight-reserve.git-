#ifndef SEAT_H
#define SEAT_H

#include <string>

using namespace std;

class Seat {
public:
	Seat(const string seatNum) :seatId (seatNum), avaliabe(true) {}
	~Seat() {}
	string getSeat() const { return seatId; }
	bool isAvaliable() const { return avaliabe; }
	bool bookSeat();
private:
	string seatId;
	bool avaliabe;
};

#endif /* SEAT_H*/
