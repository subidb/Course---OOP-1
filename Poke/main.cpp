
#include "Pokemon.h"
#include <iostream>

using namespace std;

int main()
{
    Pokemon Default, Pikachu("Pikaachu"), Bulbasaur, Snorlax, Snorlax2, Mewtwo, Voltorb;


    Pikachu = Pokemon("Pikachu");

    Bulbasaur = Pokemon("Bulbasaur", "Grass");


    Snorlax = Pokemon("Snorlax", "Normal", 50);

    //Voltorb = Pokemon("Voltorb", "Electric", 10.2, 10.2);

    Snorlax2 = Pokemon(Snorlax);

    Pokemon Onix("Onix", "Rock", 10, 12);

    Default.print();
    Pikachu.print();
    Bulbasaur.print();
    Snorlax.print();
    Snorlax2.print();
    Onix.print();

}
