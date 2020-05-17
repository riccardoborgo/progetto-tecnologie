//Giovanni F. Cappellini
#include "Data.h"


CData::CData()
{
	g = 0;
	m = 0;
	a = 0;
}

CData::CData(int g, int m, int a)
{
	this->g = g;
	this->m = m;
	this->a = a;
}

string CData::toString()
{
	string s = "";
	s = to_string(g) + "/" + to_string(m) + "/" + to_string(a);
	return s;
}

CData::~CData()
{
}
