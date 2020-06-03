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
        char* power[20];
        int level;
        double energy;

    public:
        Pokemon();
        ~Pokemon();
        Pokemon(const char*);
        Pokemon(const string);
        Pokemon(const string,const  string, const int = 10);
        Pokemon(const string,const  string, const int, const double );
        Pokemon(const Pokemon&);
        void print() const;


};

#endif // POKEMON_H
