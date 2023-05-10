#pragma once
#include "RealEstate.h"
#include <string>

class Flat : public RealEstate
{
public:
	Flat(const int& area, const int& rooms, const int& people, const int& costpersqrmtr);
	

	int get_cost() const override;
	bool move_in(const int& noOfPeople);
	int get_people() const;
	
	friend std::ostream& operator<<(std::ostream& outputStream, const Flat& flat);

	int abst() override;

private:
	int mArea;
	int mRooms;
	int mPeople;
	int mCostPerSqrmtr;
};

