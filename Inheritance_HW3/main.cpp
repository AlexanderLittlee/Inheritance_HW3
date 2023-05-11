#include "Flat.h"
#include <iostream>
#include "Apartment.h"


//majd a végén át kéne írni uint16_t-re és összehasonlítani a futásidõt
using namespace std;

int main() {

	Flat f(100,4,2,200);
	cout << f << endl;
	cout << f.get_cost() << endl;
	cout << f.get_people() << endl;
	cout << f.move_in(1) << endl;
	cout << f.move_in(2) << endl;
	cout << f.move_in(2) << endl;
	cout << f.get_people() << endl;
	cout << f << endl;



	Apartment a(60,2,10);
	
	;
	return 1;
}