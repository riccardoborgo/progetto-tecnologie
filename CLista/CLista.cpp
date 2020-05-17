#include "CLista.h"

CLista::Clista()
{
	numEl = 0;
}

void CLista::aggiungi(CAlimento alimento, int quantita)
{
	int pos = cerca(alimento);
	if (pos == -1)
	{
		listaSpesa[numEl] = alimento;
		vectQuantita[numEl] = quantita;
		numEl++;
	}
	else
		vectQuantita[pos] += quantita;
}

void CLista::rimuovi(CAlimento alimento, int quantita)
{
	int pos = cerca(alimento);
	if (pos == -1)
		cout << "L'alimento che si desidera rimuovere non è presente nella lista" << endl;
	else
	{
		vectQuantita[pos] -= quantita;
		if (vectQuantita[pos] <= 0)
		{
			for (int i = pos; i < numEl - 1; i++)
			{
				listaSpesa[i] = listaSpesa[i + 1];
				vectQuantita[i] = vectQuantita[i + 1];
			}
			numEl--;
		}
	}
}

void CLista::visualizza()
{
	for (int i = 0; i < numEl; i++)
	{
		cout << listaSpesa[i] + "\tx" + vectQuantita[i] << endl;
	}
}

int CLista::cerca(CAlimento alimento)
{
	bool trovato = false;
	int i = 0; 
	while(i < numEl && !trovato)
	{
		if (listaSpesa[i].nome == alimento.nome)
			trovato = true;
		else
			i++;
	}
	int pos;
	if (trovato)
		pos = i;
	else
		pos = -1;
	return pos;
}
