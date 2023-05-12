#pragma once
#include <string>
#include "SemiDetachedHouse.h"

using namespace std;

static class Owner
{
public:
	static void maintain(const string& path);
private:
	static void add2sdh(const string& line,  SemiDetachedHouse& sdh);
	static void addAlbi(const vector<string>& albinfo, SemiDetachedHouse& sdh);
	static void addCsalbi(const vector<string>& csalbinfo, SemiDetachedHouse& sdh);
	static void addGarazs(const vector<string>& garinfo, SemiDetachedHouse& sdh);
};

