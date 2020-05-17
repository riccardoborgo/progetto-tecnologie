//Giovanni F. Cappellini 4^A Informatica 28 aprile 2020
//Gruppo di tecnologia
#include <iostream>
#include "CCalendario.h"
#include "CAnziano.h"
#include "CLavoratore.h"
#define MAXEL 100
using namespace std;

int main()
{
	CAnziano anziano = CAnziano();
	CLavoratore lavoratore = CLavoratore();
	string spesa[MAXEL];

	anziano.aggiungiRichiesta(CData(12, 12, 2020), spesa, "Indirizzo", "Regione", "nTelefono");
	anziano.modificaRichiesta(CData(11, 12, 2020), spesa);
	lavoratore.aggiungiDisponibilita(CData(12, 12, 2020));
}