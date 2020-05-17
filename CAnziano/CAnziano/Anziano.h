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
	int nOrdine;
public:
	//il nome per identificare l'ordine sarà il cognome dell'utante
	CAnziano();
	CAnziano(string indirizzo,string nome,string cognome,CLista lista,int nOrdine);
	void effettuaOrdine(string indirizzo, string nome, string cognome);
	void visualizzaOrdine(string cognome);
	void modificaOrdine(string indirizzo, string nome, string cognome, CLista lista);
	void annullaOrdine(string cognome);
	~CAnziano();
};

