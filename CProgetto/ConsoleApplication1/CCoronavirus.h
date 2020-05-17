//Giovanni F. Cappellini
#pragma once
#include "Data.h"

class CCoronavirus
{
private:


public:
	//Costruttori
	CCoronavirus();

	//Metodi
	void modificaDisponibilita(CData data);
	void aggiungiDisponibilita(CData data);
	void annullaDisponibilita(CData data);

	//Distruttori
	~CCoronavirus();
};

