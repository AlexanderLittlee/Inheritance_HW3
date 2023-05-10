#pragma once


class Rentable {
public:
	virtual int abst() = 0;

	int total_cost(const int& numberOfMonths);
	bool is_reserved() const;
	bool reserve(const int& numberOfMonths);

private:
	int mCostPerMonth;
	int mReservedForThisLong;
	bool mReserved;
};