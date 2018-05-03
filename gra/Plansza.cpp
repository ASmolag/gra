#include "Plansza.h"
plansza:: plansza(int x,int y)
{
	wyczysc(x);
	ile_w_lini = y;

}
void plansza::wyczysc(int x)
{
	rozmiar = x;
	vector<int> tmp(rozmiar, 0);
	for (int i = 0; i < rozmiar; i++)
	{
		tab.push_back(tmp);
	}
}
void plansza::wyswietl()
{
	for (int j = 0; j < rozmiar; j++)
	{
		cout << " " << endl;
		for (int i = 0; i < rozmiar; i++)
			cout << tab[i][j] << " ";
		//cout << "element o indeksie" << i << "oraz" << j << "wynosi" << tab[i][j];

	}
}
void plansza::wstaw(int x, int y, int elem)
{
	if (tab[x][y] == 0)
		tab[x][y] = elem;
	else
		cout << "to pole jest ju¿ zajête, wybierz inne" << endl;

}
bool plansza::wygrana(int x, int y) 
{
	if (tab[x][y] = !0)
	{
		if (wiersz(x, y) || kolumna(x, y) || skos_lewy(x, y) || skos_prawy(x, y) )
			return true;
		else
			return false;
	}
	
}
bool plansza::wiersz(int x, int y)
{
	int zlicz=1;
	for (int i = 1; (x - i) >= 0 && tab[x - i][y] == tab[x][y]; i++)
			zlicz++;
	for (int i = 1; (x + i) <= (rozmiar - 1) && tab[x + i][y] == tab[x][y]; i++)
		zlicz++;
	if (zlicz == ile_w_lini)
		return true;
	else
		return false;
}
bool plansza::kolumna(int x, int y)
{
	return false;
}
bool plansza::skos_prawy(int x, int y)
{
	return false;
}
bool plansza::skos_lewy(int x, int y)
{
	return false;
}