//Giovanni F. Cappellini
#pragma once
#include <string>
using namespace std;

class CData
{
private:
	//Attributi
	int g, m, a;

public:
	//Costruttori
	CData();
	CData(int g, int m, int a);

	//Metodi
	string toString();

	//Distruttori
	~CData();
};

