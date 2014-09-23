#ifndef ZEBRA_H
#define ZEBRA_H

using namespace std;

#include "zwierze.h"

class Zebra : public Zwierze
{
friend class Zoo;
private:

int masa;
string identyfikator;
int imie;


public:

Zebra();

~Zebra();

void daj_glos();
int przedstaw_sie();
int podaj_wage();
string kim_jest();
};



#endif
