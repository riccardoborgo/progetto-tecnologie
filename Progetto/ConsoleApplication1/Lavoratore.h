#pragma once
#include "Data.h"
#include "Calendario.h"
#include <iostream>
#include<string>

using namespace std;

class CLavoratore
{
private:
	string nome, cognome, email, password;
	string regione, nTelefono;
	string listaDellaSpesa[];
public:
	CLavoratore();
	~CLavoratore();
	void modificaDisponibilit�(CData data);
	void aggiungiDisponibilit�(CData data);
	void annullaDisponibilit�(CData data);
	void visualizzaCalendario(CCalendario calendario);
};

