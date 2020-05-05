//Giovanni F. Cappellini 4^A Informatica 5 maggio 2020
//CPrenotazione
#pragma once
#include <string>
using namespace std;

class CPrenotazione
{
private:
	//Attributi
	string nome, cognome, indirizzo;
	CData data;
	CLista listaDellaSpesa;


public:
	//Costruttori
	CPrenotazione();
	CPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);

	//Metodi
	void aggiungiPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	void annullaPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	void modificaPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	void visualizzaPrenotazione();

	//Distruttori
	~CPrenotazione();
};

