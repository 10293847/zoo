#include <iostream>
#include <ctime>
#include <string>

#include "zebra.h"

using namespace std;

Zebra::Zebra()
{
masa = rand()%44+9;
identyfikator = "gnu";
imie = rand()%8999+1000;

}


Zebra::~Zebra()
{
  //  cout << imie << " --*-- eeeeeeeeeeehh..oooooooooooch..." << endl;
}


void  Zebra::daj_glos()
{
    cout << imie << " --*-- Meeeeee!" << endl;
}

int Zebra::przedstaw_sie()
{
    return imie;
}

int Zebra::podaj_wage()
{
    return masa;
}

string Zebra::kim_jest()
{
    return identyfikator;
}
