#include "Flat.h"
#include <iostream>

Flat::Flat(const int& area, const int& rooms, const int& people, const int& costpersqrmtr)
	:	mArea(area)
	,	mRooms(rooms)
	,	mPeople(people)
	,	mCostPerSqrmtr(costpersqrmtr)
{}

int Flat::abst() { return 0; }

bool Flat::move_in(const int& noOfPeople)
{
	if (mRooms + 1 < noOfPeople+mPeople)
		return false;

	mPeople += noOfPeople;
	return true;
}


int Flat::get_cost() const 
{
	return mArea * mCostPerSqrmtr;
}


int Flat::get_people() const
{
	return mPeople;
}


std::ostream& operator<<(std::ostream& outputStream, const Flat& flat)
{
	outputStream << "/ Area: " << flat.mArea << "m2" << " | " << "Rooms: " << flat.mRooms << " | " << "People: " << flat.mPeople << " | " << "Cost per squaremeter: " << flat.mCostPerSqrmtr << " /";
	return outputStream;
}