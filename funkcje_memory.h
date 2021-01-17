#pragma once
#include<iostream>
#include<ctime>
#include<cmath>
#include <windows.h> 
#include "ruchy_memory.h"
#include "licznik_pkt.h"

using namespace std;

void ruchy(char tab_mem[][4], char tab_mem_znak[][4], int tab_pole[][4], char odkryte_pola[][4], int wolne_pola[]);

void plansza() {

	// wymiary planszy 4x4

	char tab_mem[4][4];
	int wolne_pola[16];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			tab_mem[i][j] = 'X';
		}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
			cout << tab_mem[i][j] << " ";
		cout << "\n";
	}


	srand(time(NULL));

	char tab_mem_znak[4][4];
	int i, j, m = 2, koniec_tablicy = 0, kod_ASCII = 33, spr = 0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) {
			tab_mem_znak[i][j] = 'f';
		}

	while (koniec_tablicy < 8) {
		m--;
		while (m != 2) {
			i = (0 + (rand() % (3 - 0 + 1)));
			j = (0 + (rand() % (3 - 0 + 1)));
			if (tab_mem_znak[i][j] == 'f') {
				tab_mem_znak[i][j] = (char)kod_ASCII;
				do {
					i = (0 + (rand() % (3 - 0 + 1)));
					j = (0 + (rand() % (3 - 0 + 1)));
					if (tab_mem_znak[i][j] == 'f') {
						tab_mem_znak[i][j] = (char)kod_ASCII;
						spr= 1;
					}
				} while (spr == 0);
				spr = 0;

				kod_ASCII++;
				koniec_tablicy++;
				m++;
			}
		}
	}

	int tab_pole[4][4];
	char odkryte_pola[4][4];
	int pole = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j) {
			tab_pole[i][j] = pole;
			pole++;
		}
		cout << "\n";
	}


	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
			odkryte_pola[i][j] = ' ';
	}

	for (int i = 0; i < 16; ++i)
	{
		wolne_pola[i] = 16;
	}


	pole = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j) {
			cout << pole << " ";
			pole++;
		}
		cout << "\n";
	}
	
	ruchy(tab_mem, tab_mem_znak, tab_pole, odkryte_pola, wolne_pola);
}

void tablica_wynikow_memory(int& pkt_g, int& pkt_k)
{
	cout << "uzytkownik: " << pkt_g << " myśliciel: " << pkt_k << endl;
	if (pkt_g > pkt_k) {
		cout << "WYGRYWA UŻYTKOWNIK!" << endl;
	}
	if (pkt_g < pkt_k) {
		cout << "WYGRYWA MYŚLICIEL!" << endl;
		przegrana();
		Sleep(500);
	}
	if (pkt_g == pkt_k) cout << "REMIS!" << endl;


}
