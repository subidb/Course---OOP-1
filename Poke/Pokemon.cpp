#include <iostream>
#include <cstring>
using namespace std;
#include "Pokemon.h"

Pokemon::Pokemon()
{
    cout << "Default constructor" <<endl;
    name = "Pokemon";
    type = "Normal";
    level = 1;
    energy = level;

}

Pokemon::Pokemon(string n)
{
    cout << "Parametric constructor 1" <<endl;
    name = n;
    type = "Normal";
    level = 5;
    energy = level;


}

Pokemon::Pokemon(const char* n)
{
    strcpy(power,n);
}

Pokemon::Pokemon(const string n,const string t, const int l): name(n), level(l), energy(level)
{
    type = t;
    cout << "Parametric constructor 2" <<endl;
}

Pokemon::Pokemon(const string n, const string t, const  int l, const double e)
{
    cout << "Parametric constructor 3" <<endl;
    name = n;
    type = t;
    level = l;
    energy = e;

}

Pokemon::Pokemon(const Pokemon& c)
{
    cout << "copy constructor" <<endl;
    name = c.name;
    type = c.type;
    level = c.level + 10;
    energy = c.energy;

}

void Pokemon::print() const
{
    cout << "Name = " << name << " | Type = " << type << " | Level = " << level <<  " | Energy = " << energy << "\n" << endl;
}

Pokemon::~Pokemon()
{
    cout << "Destructor" <<endl;
}
