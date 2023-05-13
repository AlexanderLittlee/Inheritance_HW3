#include "FamilyApartment.h"
#include <iostream>


FamilyApartment::FamilyApartment(const double& area, const int& rooms, const int& costpersqrmtr, const int& people, const int& children)
	: Flat::Flat(area, rooms, people, costpersqrmtr)
	, mChildren(children)
{}


bool FamilyApartment::child_born() 
{
	if(get_people()<2)
		return false;

	mChildren+=1;
	return true;
}


bool FamilyApartment::move_in(const int& noOfPeople)
{
	if (mChildren / 2 + get_people() + noOfPeople < get_rooms() * 2
		&& get_people() + noOfPeople < get_area() / 10 && mChildren < get_area() / 5)
		Flat::move_in(noOfPeople);
	else
		return false;
}


std::ostream& operator<<(std::ostream& outputStream, const FamilyApartment& FA)
{
	outputStream << "FAMILY APARTMENT /  "
		<< "Area: " << FA.get_area() << "m2 | "
		<< "Rooms: " << FA.get_rooms() << " | "
		<< "People: " << FA.get_people() << " | "
		<< "Children: " << FA.mChildren << " | "
		<< "Cost per m2: " << FA.get_costpersqrm()
		<< "  /";
	return outputStream;
}
