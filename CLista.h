#include<iostream>
#include"CAlimento.h"
#define MAXEL 100

class CLista
{
	private:
		CAlimento listaSpesa[MAXEL];
		int numEl;
	public:
		Clista();
		void aggiungi(CAlimento alimento, int quantita);
		void rimuovi(CAlimento alimento, int quantita);
};