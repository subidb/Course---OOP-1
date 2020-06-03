
#include "Pokemon.h"
#include <iostream>

using namespace std;

int main()
{
    Pokemon Default, Pikachu, Bulbasaur, Snorlax, Snorlax2;

    Pikachu = Pokemon("Pikachcu");

    Bulbasaur = Pokemon("Bulbasaur", "Grass");

    Snorlax = Pokemon("Snorlax", "Normal", 50);

    Snorlax2 = Pokemon(Snorlax);

    Default.print();
    Pikachu.print();
    Bulbasaur.print();
    Snorlax.print();
    Snorlax2.print();

}
