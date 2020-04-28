#pragma once
#include <iostream>
#include<string>
using namespace std;

class CData
{
private:
	int g, m, a;
public:
	CData();
	CData(int g,int m,int a);
	string toString();
};

