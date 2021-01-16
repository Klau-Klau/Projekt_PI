#pragma once
#include "Totolotek.h"


void Totolotek::los(int ilosc, int zakres)
{
   // int* liczby = new int[ilosc];
    //int x;
    int liczby[10];

    srand(time(0));

    for (int i = 0; i < ilosc; i++)
    {
        liczby[i]= (rand() % zakres) + 1;

        for (int j = 0; j < i; j++)
        {
            if (liczby[i] == liczby[j])
            {
                --i;
                break;
            }
        }

        //delete[] liczby;
    }
    for (int i = 0; i < ilosc; i++)
        printf("%d ", liczby[i]);

    printf("\n");
}

void Totolotek::losowanie()
{
    int w = 0;

    while (w != 4)
    {
        cout << "Zasady:" << endl << "Gra zale�y od ilo�ci liczb z okre�lonego zakresu w zale�no�ci od wybrnego wariantu" << endl << "1-Du�y lotek (sze�� liczb z zakresu 1-49)" << endl << "2-Ma�y lotek(pi�c liczb z zakresu 1-35)" << endl << "3-Multi lotek(dzi�si�ciu liczb z zakresu 10-80)" << endl << "4-Wyj�cie" << endl;

        cout << "Niech szcz�cie b�dzie z Tob�!" << endl;

        cin >> w;
        cout << endl;
        cout << endl;
        cout << "Wylosowane liczby to;" << endl;

        switch (w)
        {
        case 1:
            los(6, 49);
            cout << "GRATULACJ�! WYGRA�E�" << endl;
            cout << endl;
            cout << endl;
            break;

        case 2:
            los(5, 75);
            cout << "GRATULACJ�! WYGRA�E�" << endl;
            cout << endl;
            cout << endl;

            break;

        case 3:
            los(10, 80);
            cout << "GRATULACJ�! WYGRA�E�" << endl;
            cout << endl;
            cout << endl;
            break;

        default:
            break;
        }
    }
}