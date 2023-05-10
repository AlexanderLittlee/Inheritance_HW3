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

	mReservedForThisLong = numberOfMonths;
	mReserved = true;
	return mReserved;
}