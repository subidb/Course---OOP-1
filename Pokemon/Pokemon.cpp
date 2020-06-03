#include <iostream>

using namespace std;
#include "Pokemon.h"

Pokemon::Pokemon()
{
    name = "Pokemon";
    type = "Normal";
    level = 1;
}

Pokemon::Pokemon(string n)
{
    name = n;
    type = "Normal";
    level = 5;
}

Pokemon::Pokemon(string n, string t, int l): name(n), level(l)
{
    type = t;
}

Pokemon::Pokemon(Pokemon& c)
{
    name = c.name;
    type = c.type;
    level = c.level + 10;
}

void Pokemon::print()
{
    cout << "Name = " << name << " | Type = " << type << " | Level = " << level << "\n" << endl;
}

Pokemon::~Pokemon()
{
    //dtor
}
