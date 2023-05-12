#include "Rentable.h"

int Rentable::total_cost(const int& numberOfMonths)
{
	return numberOfMonths * mCostPerMonth;
}


bool Rentable::is_reserved() const
{
	return mReserved;
}


bool Rentable::reserve(const int& numberOfMonths)
{
	if (mReserved)
		return false;
	else
		mReservedForThisLong = numberOfMonths;
		mReserved = true;
		return mReserved;
}

void Rentable::set_reservation(const int& length)
{
	mReservedForThisLong = length;
}

int Rentable::get_reservation() const
{
	return mReservedForThisLong;
}
