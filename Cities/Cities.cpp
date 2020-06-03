#include <iostream>
#include "Cities.h"

Cities::Cities()
{
    name = "City";
    mayor = "Some person";
    population = 0;
}

Cities::~Cities()
{
    cout << "Destructor" << endl;
}


/*Cities::Cities(string, string, int): name("Bruhtown"), population(0)//, mayor("Nibba"),
{
    
    population = 100;
}*/

void Cities::setName(string &newname)
{
    name = newname;
}

void Cities::setPopulation(int newp)
{
    population = newp;
}

void Cities::setMayor(string mm)
{
    mayor = mm;
}

string Cities::getMayor() const
{
    return mayor;
}

int Cities::getPopulation()
{
    return population;
}

void Cities::print()
{
    cout << "City name = " << name << "\nPopulation = " << population << "\nmayor = " << mayor << "\n" << endl;
}

