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
	void modificaDisponibilità(CData data);
	void aggiungiDisponibilità(CData data);
	void annullaDisponibilità(CData data);
	void visualizzaCalendario(CCalendario calendario);
};

