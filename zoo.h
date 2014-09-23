#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "zwierze.h"

using namespace std;

class Zoo
{
private:

    int suma_wag_zwierzat;
    int populacja;
    int masa_krytyczna;
    int podatek;

    vector<Zwierze*> zwierzeta;

public:

    Zoo();
    ~Zoo();

    void zycie();

    bool czy_nowe();
    bool czy_zdechnie();

    Zwierze* jakie_zwierze();

    void nowe_zwierze();
    void kasuj_zwierze();

    void zeznanie_podatkowe();
    void pokaz_zwierzat();
    void kasuj_zwierzeta();
};



#endif
