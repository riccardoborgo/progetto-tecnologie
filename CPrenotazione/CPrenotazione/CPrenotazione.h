#pragma once
#include <string>
using namespace std;

/**
*	@author Giovanni F. Cappellini
*	@version 1.0
	@class CPrenotazione
	@brief La classe gestisce le prenotazioni
*/
class CPrenotazione
{
private:
	/**Nome, cognome e indirizzo dell'utente per la prenotazione*/
	string nome, cognome, indirizzo;

	/**Data di prenotazione*/
	CData data;

	/**Lista contenente la spesa*/
	CLista listaDellaSpesa;


public:
	/**
	*	@brief Costruttore di default
	*
	*	Inizializzo gli attributi della prenotazione
	*/
	CPrenotazione();

	/**
	*	@brief Costruttore con paramentri
	*
	*	@param nome
	*	@param cognome
	*	@param indirizzo
	*	@param data
	*	@param listaDellaSpesa
	*
	*	Inizializzo \c nome, \c cognome, \c indirizzo, \c data e \c listaDellaSpesa con nome, cognome, indirizzo, data e listaDellaSpesa passati come parametro
	*/
	CPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);

	/**
	*	@brief Metodo che aggiunge la prenotazione
	*
	*	@param nome
	*	@param cognome
	*	@param indirizzo
	*	@param data
	*	@param listaDellaSpesa
	*
	*	Aggiungo la prenotazione con nome, cognome, indirizzo, data, listaDellaSpesa passati come parametro
	*/
	void aggiungiPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	
	/**
	*	@brief Metodo che annulla la prenotazione
	*
	*	@param nome
	*	@param cognome
	*	@param indirizzo
	*	@param data
	*	@param listaDellaSpesa
	*
	*	Annullo la prenotazione con nome, cognome, indirizzo, data, listaDellaSpesa passati come parametro
	*/
	void annullaPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	
	/**
	*	@brief Metodo che modifica la prenotazione
	*
	*	@param nome
	*	@param cognome
	*	@param indirizzo
	*	@param data
	*	@param listaDellaSpesa
	*
	*	Modifico la prenotazione con nome, cognome, indirizzo, data, listaDellaSpesa passati come parametro
	*/
	void modificaPrenotazione(string nome, string cognome, string indirizzo, CData data, CLista listaDellaSpesa);
	
	/**
	*	@brief Metodo che visualizza le prenotazioni
	*
	*	Visualizzo tutte le prenotazioni
	*/
	void visualizzaPrenotazione();

	//Distruttori
	~CPrenotazione();
};

