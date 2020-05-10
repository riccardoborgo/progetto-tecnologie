#include <iostream>
#include <string>
#include Calendario.h
#include Data.h

class CLavoratore()
{
	private: 
	
	string nome, cognome, e-mail, password;
	string regione, nTelefono;
	CCalendario calendario;
	
	public:
	
	CLavoratore();
	CLavoratore(string nome, string cognome, string e-mail, string password, string regione, string nTelefono); // crea un lavoratore 
	void modificaDisponibilità(CCalendario calendario, CData data, string regione, string nTelefono);// metodo per modificare alcuni campi di una disponibilità
	void aggiungiDisponibilità(CCalendario calendario, CData data);// metodo per aggiungere una data di disponibilità per la spesa
	void annullaDisponibilità(CCalendario calendario, CData data);// metodo per rimuovere una data di disponibilità per la spesa
	void visualizzaCalendario(CCalendario calendario);// metodo per visualizzare il calendario completo
	
	~CLavoratore();
}