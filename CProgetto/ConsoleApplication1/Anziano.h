#pragma once
#include "Data.h"
#include <iostream>
#include<string>

using namespace std;

class CAnziano
{
private:
	string nome, cognome, email, password;
	string regione, nTelefono, indirizzo;
	string listaDellaSpesa[];
public:
	CAnziano();
	~CAnziano();
	void modificaRichiesta(CData data, string listaDellaSpesa[]);
	void aggiungiRichiesta(CData data, string listaDellaSpesa[],string indirizzo,string regione,string nTelefono);
	void annullaRichiesta(CData data);
};

