#include <iostream>
#include <cstdlib>
#include <vector>
#include "Plansza.h"

using namespace std;
int main()
{
	int r;
	//int ruch;
	int ile;
	int x;
	int y;
	cout << "podaj rozmiar planszy" << endl;
	cin >> r;
	cout << "podaj ile w lini" << endl;
	cin >> ile;
	plansza p(r,ile);

	
		p.wyswietl();
		cout << "wstaw element 1 w polu o indeksie x:" << endl;
		cin >> x;
		cout << "y:" << endl;
		cin >> y;
		p.wstaw(x, y, 1);
	while (p.wygrana(x,y)==false)
	{
		p.wyswietl();
		cout << "wstaw element 1 w polu o indeksie x:" << endl;
		cin>> x;
		cout << "y:" << endl;
		cin >> y;
		p.wstaw(x, y, 1);
	}
	p.wyswietl();
	cout << "wygrales gre" << endl;

	//vector<vector<int>> tab(p.rozmiar, vector<int>(p.rozmiar, 0)); //inicjacja tablicy z zerowymi wartosciami 

	int koniec;
	cin >> koniec;
    return 0;
}

