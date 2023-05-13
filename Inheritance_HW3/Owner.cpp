#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Owner.h"
#include "SemiDetachedHouse.h"
#include "Apartment.h"
#include "FamilyApartment.h"
#include "Garage.h"


vector<SemiDetachedHouse> Owner::get_houses()
{
	return mHouses;
}


void Owner::maintain(const string& path, vector<SemiDetachedHouse>& vec)
{
	SemiDetachedHouse sdh(4,2);


	std::ifstream inputfile(path);
	if (!inputfile.is_open())
		return;

	string s;
	while (!inputfile.eof())
	{
		getline(inputfile, s);
		if (s.empty())
			continue;

		add2sdh(s, sdh);
	}
	
	vec.push_back(sdh);

	inputfile.close();
}




void Owner::add2sdh(const string& line,  SemiDetachedHouse& sdh)
{
	vector<string> elements;
	string element;
	stringstream ss(line);
	
	while (ss >> element)
	{
		elements.push_back(element);
	}

	if (elements[0] == "Alberlet")
	{
		elements.erase(elements.begin());
		addAlbi(elements, sdh);
	}
	else if (elements[0] == "CsaladiApartman")
	{
		elements.erase(elements.begin());
		addCsalbi(elements, sdh);
	}
	else if (elements[0] == "Garazs")
	{
		elements.erase(elements.begin());
		addGarazs(elements, sdh);
	}
	else
		return;
}


void Owner::addAlbi(const vector<string>& albinfo,  SemiDetachedHouse& sdh)
{
	vector<int> info(albinfo.size());
	
	transform(albinfo.begin(), albinfo.end(), info.begin(),
		[](const string& s) { return stoi(s); });

	Apartment a(info[0], info[1], info[2]);
	sdh.add_flat(a);
}

//ezt a kettõt össze lehetne vonni még
void Owner::addCsalbi(const vector<string>& csalbinfo,  SemiDetachedHouse& sdh)
{
	vector<int> info(csalbinfo.size());

	transform(csalbinfo.begin(), csalbinfo.end(), info.begin(),
		[](const string& s) { return stoi(s); });

	FamilyApartment a(info[0], info[1], info[2]);
	sdh.add_flat(a);
}


void Owner::addGarazs(const vector<string>& garinfo, SemiDetachedHouse& sdh)
{
	vector<int> info(garinfo.size()-1);

	transform(garinfo.begin(), garinfo.end()-1, info.begin(),
		[](const string& s) { return stoi(s); });

	bool futott = garinfo[2] == "futott";

	Garage g(info[0], info[1], futott);
	sdh.add_garage(g);
}
