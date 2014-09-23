#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "forfiter.h";

Forfiter::Forfiter()
{
masa = rand()%20+11;
identyfikator = "forfiter";
imie = rand()%8999+1000;

}


Forfiter::~Forfiter()
{
   // cout << imie << " --*-- eeeeeeeeeeehh..oooooooooooch..." << endl;
}


void  Forfiter::daj_glos()
{
    cout << imie << " --*-- Uciekaj k** stąd, szwagier" << endl;
}

int Forfiter::przedstaw_sie()
{
    return imie;
}

int Forfiter::podaj_wage()
{
    return masa;
}

string Forfiter::kim_jest()
{
    return identyfikator;
}
