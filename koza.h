#ifndef KOZA_H
#define KOZA_H

using namespace std;

#include "zwierze.h"

class Koza : public Zwierze
{
friend class Zoo;
private:

int masa;
string identyfikator;
int imie;


public:

Koza();

~Koza();

void daj_glos();
int przedstaw_sie();
int podaj_wage();
string kim_jest();

};


#endif
