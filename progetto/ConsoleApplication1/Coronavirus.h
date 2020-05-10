#pragma once
#include <iostream>
#include<string>

using namespace std;

class CCoronavirus
{
private:
	
public:
	CCoronavirus();
	~CCoronavirus();
	void modificaDisponibilità(CData data);
	void aggiungiDisponibilità(CData data);
	void annullaDisponibilità(CData data);

};

