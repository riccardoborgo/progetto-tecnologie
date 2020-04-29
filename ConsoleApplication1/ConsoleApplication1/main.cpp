#include <iostream>
#include<string>
#include"Calendario.h"
#include"Lavoratore.h"
#include"Anziano.h"
#define MAXEL 100

using namespace std;

int main() {
	CAnziano anziano = CAnziano();
	CLavoratore lavoratore = CLavoratore();
	string spesa[MAXEL];

	anziano.aggiungiRichiesta(CData(12, 12, 2020),spesa, "indirizzo","regione","nTelefono");
	anziano.modificaRichiesta(CData(11, 12, 2020), spesa);
	lavoratore.aggiungiDisponibilità(CData(12, 12, 2020));
}