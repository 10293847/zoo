#include <iostream>
#include <ctime>
#include <string>

#include "koza.h"

using namespace std;

Koza::Koza()
{
masa = rand()%19+15;
identyfikator = "gnu";
imie = rand()%8999+1000;

}


Koza::~Koza()
{
    //cout << imie << " --*-- eeeeeeeeeeehh..oooooooooooch..." << endl;
}


void  Koza::daj_glos()
{
    cout << imie << " --*-- Meeeeee!" << endl;
}

int Koza::przedstaw_sie()
{
    return imie;
}

int Koza::podaj_wage()
{
    return masa;
}

string Koza::kim_jest()
{
    return identyfikator;
}
