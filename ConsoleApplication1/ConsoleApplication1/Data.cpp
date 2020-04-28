#include "Data.h"
#pragma once
#include <iostream>
#include<string>


CData::CData()
{
	g = 0;
	m = 0;
	a = 0;
}

CData::CData(int g, int m, int a)
{
	this->m = m;
	this->g = g;
	this->a = a;
}

string CData::toString()
{
	string s = "giorni : " + to_string(g) + " mesi : " + to_string(m) + " anni : " + to_string(a);
	return s;
}
