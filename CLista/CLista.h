#pragma once
#include"CAlimento.h"
#include<iostream>
using namespace std;
#define MAXEL 100

class CLista
{
private:
	CAlimento listaSpesa[MAXEL];
	int vectQuantita[MAXEL];
	int numEl;
public:
	Clista();
	void aggiungi(CAlimento alimento, int quantita);
	void rimuovi(CAlimento alimento, int quantita);
	void visualizza();
	int cerca(CAlimento alimento);					//restituisce la posizione dell'alimento cercato
};