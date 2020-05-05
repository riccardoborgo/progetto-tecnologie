#pragma once
#include<iostream>
#include<string>
#include "lista.h"
using namespace std;

class CAnziano
{
private:
	string indirizzo, nome, cognome;
	CLista lista;
public:
	//il nome per identificare l'ordine sarà il cognome dell'utante
	CAnziano();
	CAnziano(string indirizzo,string nome,string cognome,CLista lista);
	void effettuaOrdine(CLista lista);
	void visualizzaOrdine(string cognome);
	void modificaOrdine(string cognome);
	void annullaOrdine(string cognome);
	~CAnziano();
};

