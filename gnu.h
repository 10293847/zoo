#ifndef GNU_H
#define GNU_H

using namespace std;

#include "zwierze.h"


class Gnu : public Zwierze
{
friend class Zoo;
private:

int masa;
string identyfikator;
int imie;


public:

Gnu();

~Gnu();

void daj_glos();
int przedstaw_sie();
int podaj_wage();
string kim_jest();

};



#endif
