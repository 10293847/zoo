#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "gnu.h"

Gnu::Gnu()
{
masa = rand()%35+7;
identyfikator = "gnu";
imie = rand()%8999+1000;

}


Gnu::~Gnu()
{
   // cout << imie << " --*-- eeeeeeeeeeehh..oooooooooooch..." << endl;
}


void  Gnu::daj_glos()
{
    cout << imie << " --*-- Mhmm?" << endl;
}

int Gnu::przedstaw_sie()
{
    return imie;
}

int Gnu::podaj_wage()
{
    return masa;
}

string Gnu::kim_jest()
{
    return identyfikator;
}
