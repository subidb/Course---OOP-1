#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

using namespace std;
#include "Pokemon.h"


class Pokemon
{
    private:
        string name;
        string type;
        int level;

    public:
        Pokemon();
        ~Pokemon();
        Pokemon(string);
        Pokemon(string, string, int = 10);
        Pokemon(Pokemon&);
        void print();


};

#endif // POKEMON_H
