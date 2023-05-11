#pragma once


class Rentable {
public:
	virtual int abst() = 0;

	virtual int total_cost(const int& numberOfMonths);
	virtual bool is_reserved() const;
	virtual bool reserve(const int& numberOfMonths);

private:
	int mCostPerMonth;
	int mReservedForThisLong;
	bool mReserved;
};