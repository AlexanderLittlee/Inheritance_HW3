#pragma once


class RealEstate 
{
public:
	virtual int abs() = 0;
	
	virtual int get_cost() const { return mCost; }

private:
	int mCost;
};