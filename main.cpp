#include <iostream>
#include <ctime>
#include <string>

#include "zoo.h"
#include "zwierze.h"
#include "koza.h"
#include "gnu.h"
#include "zebra.h"
#include "forfiter.h"

using namespace std;

int main()
{
srand(time(NULL));

Zoo pierwsze;
pierwsze.zycie();
pierwsze.kasuj_zwierzeta();
pierwsze.pokaz_zwierzat();
//pierwsze.zeznanie_podatkowe();



return 0;
}
