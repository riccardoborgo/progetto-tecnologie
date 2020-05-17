#include "Anziano.h"



CAnziano::CAnziano()
{
	indirizzo = "";
	nome = "";
	cognome = "";
	lista = CLista();
	nOrdine = 0;
}

CAnziano::CAnziano(string indirizzo, string nome, string cognome, CLista lista, int nOrdine)
{
	this->indirizzo = indirizzo;
	this->nome = nome;
	this->cognome = cognome;
	this->lista = lista;
	this->nOrdine = nOrdine;
}


void CAnziano::effettuaOrdine(string indirizzo, string nome, string cognome)
{
	ordini.addOrdine(indirizzo, nome, cognome);
}

void CAnziano::visualizzaOrdine(string cognome)
{
	int i = 0;
	bool find = false;
	while (find == false || i < ordini.length())
	{
		if (cognome == ordini[i].cognome)
		{
			ordini[i].visualizza;
			find = true;
		}
	}
}

void CAnziano::modificaOrdine(string indirizzo, string nome, string cognome,CLista lista)
{
	int i = 0;
	bool find = false;
	while (find == false || i < ordini.length())
	{
		if (cognome == ordini[i].cognome)
		{
			ordini[i].modifica(indirizzo,nome,cognome,lista);
			find = true;
		}
	}
}

void CAnziano::annullaOrdine(string cognome)
{
	int i = 0;
	bool find = false;
	while (find == false || i < ordini.length())
	{
		if (cognome == ordini[i].cognome)
		{
			ordini[i].cancellaOrdine();
			find = true;
		}
	}
}


CAnziano::~CAnziano()
{
}
