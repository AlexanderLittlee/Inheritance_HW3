#pragma once


class RealEstate 
{
public:
	virtual int abst() = 0;
	
	virtual int get_cost() const { return mCost; }

private:
	int mCost;
};