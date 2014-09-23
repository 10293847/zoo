#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>

using namespace std;

#include "zoo.h"
#include "zwierze.h"
#include "koza.h"
#include "gnu.h"
#include "zebra.h"
#include "forfiter.h"


Zoo::Zoo()
{

    cout << "\nzoo otwarte!!" << endl;
    suma_wag_zwierzat = 0;
    populacja = 0 ;
    masa_krytyczna = 1000;
    zwierzeta.resize(0);
    podatek =0;
}


Zoo::~Zoo()
{
    cout << "\nzoo zamkniete!!" << endl;
    for (unsigned short i=0 ; i< zwierzeta.size(); i++)
    {
        delete zwierzeta.at(i);
    }
    zwierzeta.resize(0);
}


bool Zoo::czy_nowe()
{
    int czy = rand()%100+1;
    if (czy <= 30) return true;
    return false;
}


bool Zoo::czy_zdechnie()
{
    int czy = rand()%100+1;
    if (czy <= 90) return true;
    return false;
}

Zwierze* Zoo::jakie_zwierze()
{
    int jakie = rand()%1000+1;

    if(jakie <=300)
    {
        cout << "\n----------- + koza \n";
        return new Koza();
    }
    else if (jakie>300 && jakie <=500)
    {
        cout << "\n------------ + gnu \n";
        return new Gnu();
    }
    else if (jakie>500 && jakie <=900)
    {
        cout << "\n------------- + zebra \n";
        return new Zebra();
    }
    else
    {
        cout << "\n------------- + forfiter \n";
        return new Forfiter();
    }
}

void Zoo::zycie()
{
    int czas = 1;
    while(czas <=366)
    {
        cout << "\n # czas:  " << czas << endl;

    if(suma_wag_zwierzat >=1000)
    {
        cout << "podatek do zaplacenia:  -->" << ( (suma_wag_zwierzat-1000) )<< endl;
        podatek+=(suma_wag_zwierzat-1000);

        if(czy_zdechnie() &&zwierzeta.size())
        {
            int pozycja = rand()%zwierzeta.size();
            cout << "\nzaraz odejdzie:  " << (zwierzeta.at(pozycja)->przedstaw_sie()) <<endl;
            (zwierzeta.at(pozycja)->daj_glos());
            suma_wag_zwierzat -= (zwierzeta.at(pozycja)->podaj_wage());
            delete zwierzeta.at(pozycja);
            zwierzeta.erase(zwierzeta.begin()+pozycja);
        }
    }

    if(czy_nowe())
    {
        Zwierze *nowe = jakie_zwierze();
        zwierzeta.push_back(nowe);
        cout << "imie :  " << (nowe->przedstaw_sie()) << endl;
        cout << "\n aktualna suma wag :  " << (suma_wag_zwierzat +=nowe->podaj_wage()) << endl;
    }
    czas++;
    sleep(1);
    }
}

void Zoo::zeznanie_podatkowe()
{
    cout << "\n\n suma zobowiazan podatkowych : " << podatek << endl;
}

void Zoo::pokaz_zwierzat()
{
    cout << "\n\na teraz przed Panstem wystapia!!!\n\n";

    for (unsigned short i=0; i<zwierzeta.size() ;i++)
    {
        cout << i+1 << ".  ";
        (zwierzeta.at(i)->kim_jest());
        cout << "\t";
        (zwierzeta.at(i)->daj_glos());
        cout << endl;
    }
}


void Zoo::kasuj_zwierzeta()
{
    cout << "\n\na teraz nastapi kasowanie calego zoo !!!\n\n";

    for (unsigned short i=0; i<zwierzeta.size() ;i++)
    {
        cout << i+1 << ",\t";
        delete zwierzeta.at(i);
    }
    zwierzeta.resize(0);
}
