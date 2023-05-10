#pragma once


class RealEstate {
public:
	virtual int get_cost() const { return mCost; }

private:
	int mCost;

	virtual void abstract() = 0;
};