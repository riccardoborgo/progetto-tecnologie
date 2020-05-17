//Giovanni F. Cappellini
#pragma once
#include "Data.h"

class CAnziano
{
private:
	//Attributi
	string nome, cognome, email, password;
	string regione, nTelefono, indirizzo;
	string listaDellaSpesa[];

public:
	//Costruttori
	CAnziano();

	//Metodi
	void modificaRichiesta(CData data, string listaDellaSpesa[]);
	void aggiungiRichiesta(CData data, string listaDellaSpesa[], string indirizzo, string regione, string nTelefono);
	void annullaRichiesta(CData data);

	//Distruttori
	~CAnziano();
};

