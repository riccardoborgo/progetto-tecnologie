#pragma once
#include "Data.h"
#include "CCalendario.h"

class CLavoratore
{
private:
	//Attributi
	string nome, cognome, email, password;
	string regione, nTelefono;
	string listaDellaSpesa[];

public:
	//Costruttori
	CLavoratore();

	//Metodi
	void modificaDisponibilita(CData data);
	void aggiungiDisponibilita(CData data);
	void annullaDisponibilità(CData data);
	void visualizzaCalendario(CCalendario calendario);

	//Distruttori
	~CLavoratore();
};

