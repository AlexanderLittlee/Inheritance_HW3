#include "Flat.h"
#include <iostream>

//majd a v�g�n �t k�ne �rni uint16_t-re �s �sszehasonl�tani a fut�sid�t
using namespace std;

int main() {

	Flat f(100,4,2,200);
	cout << f << endl;
	cout << f.get_cost() << endl;
	cout << f.get_people() << endl;
	cout << f.move_in(1) << endl;
	cout << f.move_in(2) << endl;
	cout << f.move_in(2) << endl;
	cout << f.get_people();
	cout << f << endl;
	return 1;
}