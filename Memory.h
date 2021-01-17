#pragma once
#include<iostream>
#include<ctime>
#include<cmath>
#include <windows.h> 
#include "funkcje_memory.h"
#include "ruchy_memory.h"

using namespace std;

void plansza();
void ruchy();
void tablica_wynikow_memory();
void ruchy_komp();
void wyswietlanie();


void pocz_memory() {

	plansza();

	cout << "KONIEC" << endl;
	Sleep(3000);

	
}
