#pragma once
#include <iostream>
#include <string>
using namespace std;
class CData
{
private:
	int gg, mm, aa;
public:
	CData();
	~CData();
	CData(int gg,int mm,int aa);
	string toString();
	int DiffeDa(CData &altro);
	int getAa();
	int getMm();
	int getGg();
	void setAa(int aa);
	void setMm(int mm);
	void setGg(int gg);
};