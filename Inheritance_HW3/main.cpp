#include "Flat.h"
#include <iostream>
#include "Apartment.h"
#include "FamilyApartment.h"
#include "Garage.h"

//majd a végén át kéne írni uint16_t-re és összehasonlítani a futásidõt
using namespace std;

int main() {

	//Flat f(100,4,2,200);
	//cout << f << endl;
	//cout << f.get_cost() << endl;
	//cout << f.get_people() << endl;
	//cout << f.move_in(1) << endl;
	//cout << f.move_in(2) << endl;
	//cout << f.move_in(2) << endl;
	//cout << f.get_people() << endl;
	//cout << f << endl << endl;
 

	//Apartment a(60,2,10);
	//cout << a << endl;
	//cout << a.get_people() << endl;
	//cout << a.is_reserved() << endl;
	//cout << a.total_cost(1) << endl;
	//cout << a.move_in(17) << endl;
	//cout << a.move_in(5) << endl;
	//cout << a.total_cost(1) << endl;
	//cout << a.total_cost(2) << endl;
	//cout << a << endl << endl;
	

	//FamilyApartment f(60,3,10);
	//cout << f << endl;
	//cout << f.move_in(2) << endl;
	//cout << f.child_born() << endl;
	//cout << f << endl << endl;

	Garage g(10, 5, 0);
	cout << g << endl;
	cout << g.total_cost(1) << endl;
	cout << g.reserve(2) << endl;
	cout << g.reserve(1) << endl;
	g.move_car();
	cout << g << endl;

	
	return 1;
}