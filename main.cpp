#include <iostream>
#include <cstdio>
#include <ctime>
#include<cstdlib>
#include<Windows.h>
#include "Logowanie.h"
#include "logowanie_metody.h"
#include"Totolotek.h"
#include"Kolko.h"
#include "kolko_metody.h"
#include "licznik_pkt.h"
#include "Papier.h"
#include "Memory.h"
#include "funkcje_memory.h"
#include "ruchy_memory.h"

using namespace std;

void pocz_memory();

class User
{
public:
    User()
    {
        for (int i = 1; i < 5; i++) {
            statystyki[i][0] = rand() % 10 + 1;
            statystyki[i][1] = rand() % 10 + 1;
        }
    }
    string Imie;

    int statystyki[4][2]; //int[i][0] wygrane;     int[i][1] przegrane;


    void info()
    {

        cout << "______________________________________" << endl;
        cout << "Informacje o postaci: " << endl;
        cout << "Imie: " << Imie << endl;
       // cout << "Plec: " << plec << endl;
        cout << "Statystyki: " << endl;
        for (int i = 1; i < 5; i++) {
            cout << "Gra nr: " << i;
            cout << "\t Wygrane: " << statystyki[i][0];
            cout << "\t Przegrane: " << statystyki[i][1] << endl;
        }

        cout << "______________________________________" << endl << endl;

    }



};


void poziom(User& obiekt)
{
    int poz = 0;
    cout << "______________________________________" << endl;
    cout << "Poziom postaci: " << endl;
    for (int i = 1; i < 5; i++) {
        poz += (obiekt.statystyki[i][0] * 10) / (obiekt.statystyki[i][1] * 5 + 1);
    }
    cout << poz << endl;
    cout << "______________________________________" << endl << endl;

}

void menu() {
    int stan = 1;
    while (stan != 0)
    {
        cout << "Podaj liczbe od 0 do 2:" << endl << "(0)-wyjście" << endl << "(1)-statystyki graczy" << endl << "(2)-gra" << endl;

        cout << endl;
        cin >> stan;
        if (stan == 1) {
              User gracz_1;
              User gracz_2;
              string imie;
             


              gracz_1.Imie = "Klaudia";
              gracz_2.Imie = "Asia";
              gracz_1.info();
              poziom(gracz_1);
              gracz_2.info();
              poziom(gracz_2);

        }
        string odp;
        if (stan == 2) {
            cout << "Niech rozpocznie się gra!" << endl;
            cout << endl;
            
            cout << "Drogi studencie! " << endl << "Nadeszły trudne czasy, sesja coraz bliżej. To już nie przelewki. Trafiłeś do mrocznego świata strachu i paniki. Zegar nieubłagalnie tyka. Jeżeli chcesz przeżyć musisz wykonać pewne zadania."<<endl<<"Mogą cię uratować albo jeszcze bardziej pogrążyć. Czy jesteś pewny, że chcesz zaryzykować ? " << endl;

            cin >> odp;
            if (odp == "nie") break;

            cout << "Oto twoje pierwsze zadanie. Spotkałeś na swojej drodze surowego profesora. Ten człowiek jest sprawcą dzikich jęków studentów."<<endl<<"Nieszczęśnicy którzy spotkali go na swojej drodze szybko odczuwają piętno swoich zaniedbań matematycznych ze szkoły średniej. Przygotowane przez niego pytania na egzamin są chyba z kosmosu."<<endl<<"Strzeż się gdyż nigdy nie wiesz kiedy zostaniesz zaatakowany całką nieoznaczoną. Szczęście sprzyja jednak głupcom, więc dostajesz jednak szansę."<<endl<<"Jeżeli wygrasz z nim w „kółko i krzyżyk” unikniesz pisania egzaminu, a twoja ocena wyniesie 5.0. Czy jesteś gotowy? Ta misja będzie wymagać od Ciebie sprytu i szczęścia. Niech moc będzie z Tobą! Powodzenia!" << endl;
            Sleep(5000);
            cout << endl;

            Kolko f;
            f.kolko();

            system("cls");
            if (porażka == 0) {
                cout << "Bardzo się starałeś, lecz z gry wyleciałeś :C Cóż, powodzenia na egzaminie. Lepiej przyłóż się do nauki. Żegnaj studencie." << endl;
                break;
            }
            else
            cout << "Udało się!!! Pierwsza misja za Tobą. Tym razem na Twojej drodze pojawił się dziwny stwór. To wszechwiedzący troll. Proponuje ci grę w „Papier, kamień, nożyce”."<<endl<<"Jeśli wygrasz pomoże Ci w na wybranym egzaminie, jeśli jednak przegrasz do końca życia będziesz musiał mu usługiwać. Ryzykujesz? Chyba warto. Obyś przechytrzył sprytnego trolla." << endl;
            Sleep(5000);
            cout << endl;

            porażka = 1;
            pocz_papier();
            system("cls");
            if (porażka == 0) {
                cout << "Niestety nie tym razem :( Musisz teraz być na każde zawołanie trolla. Czeka Cię ciężki żywot. Żegnaj studencie." << endl;
                break;
            }
            else
                cout << "WOW :O Gratulacje! Kolejną misją jest gra w „memory”. Twój przeciwnik to starożytny myśliciel. Wita cię swoim donośnym ,,Witam Psze Państwa” i już wiesz, że masz do czynienia z  jednostką wybitną."<<endl<<"W oddali słyszysz tykanie tysiąca zegarów, nie napawa nas to optymizmem co do Twojej przyszłej drogi, ale może ów mędrzec okaże litość nad biednym studentem."<<endl<<"Bądź ostrożny i życzymy ci powodzenia co do Twojej przyszłości. Niech szczęście będzie z Tobą!" << endl;
            Sleep(5000);
            cout << endl;

            porażka = 1;
            pocz_memory();
            system("cls");
            if (porażka == 0) {
                cout << "Ups! Przegrałeś :/ Lepiej uciekaj zanim dopadnie Cię myśliciel. Żegnaj studencie." << endl;
                break;
            }
            else
                cout << "Jesteś niesamowity! Zmieniacz czasu jest Twój. Przed Tobą ostatnie zadanie. Tym razem wygrana to niespodzianka…. Czy masz szczęście? Oto gra „Totolotek”. Komora maszyny losującej jest pusta."<<endl<<"Następuje zwolnienie blokady. Rozpoczynamy losowanie. " << endl;
            Sleep(5000);
            cout << endl;

            porażka = 1;
            pocz_totolotek();
            system("cls");
            if (porażka == 0) {
                cout << "Było tak blisko ;_; Niestety zostajesz przeniesiony do mroźnej krainy skutej lodem. Będziesz musiał tam uciekać przed śnieżnymi bestiami. Żegnaj studencie." << endl;
                break;
            }
            else
            
            cout << "Tak jest, to już koniec. WYGRAŁEŚ :) Wszystko co do tej pory Cię spotkało to sen. Jesteś teraz na plaży w tropikalnych Malajach. Wygrana z totolotka wystarczy ci na spokojne życie. Studia? Co to są studia?" << endl << "Odpoczywaj, ciesz się ciepłymi promieniami słońca. Drogi graczu jesteś mistrzem." << endl;
            Sleep(5000);
            cout << endl;


        }
        if (stan == 0) {

            cout << "Wyjście z programu";
        }
        break;
    }
}

int main()

{
    setlocale(LC_CTYPE, "Polish");
    srand(time(NULL));

    Logowanie a;
    a.log();

    menu();

    }
