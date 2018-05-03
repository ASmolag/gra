#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class plansza
{
private:
	int rozmiar;
	vector<vector<int>>tab;
	int ile_w_lini;
	//vector<vector<int>>tab(int, vector<int>(int, int)); //inicjacja tablicy z zerowymi wartosciami 

public:
	plansza(int x,int y); // konstruktor parametryczny 
	void wyczysc(int x); // zerowanie planszy
	void wyswietl(); // wyswietlanie planszy
	void wstaw(int x,int y,int elem);
	bool wygrana(int x, int y); // sprawdza czy ktoœ wygra³ grê 
	bool wiersz(int x,int y); // sprawdza czy nastepuje wygrana w wierszu
	bool kolumna(int x,int y); // sprawdz czy w kolumnie
	bool skos_prawy(int x, int y); // 
	bool skos_lewy(int x, int y);
};

