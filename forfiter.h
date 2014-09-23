#ifndef FORFITER_H
#define FORFITER_H

using namespace std;

#include "zwierze.h"

class Forfiter : public Zwierze
{
friend class Zoo;
private:

int masa;
string identyfikator;
int imie;


public:

Forfiter();

~Forfiter();

void daj_glos();

int przedstaw_sie();
int podaj_wage();
string kim_jest();

};




#endif
