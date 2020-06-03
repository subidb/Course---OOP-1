#include <iostream>

using namespace std;
#include "Creature.h"


Creature::Creature()
{
    speed = 5;
}

Creature::~Creature()
{

}


Dragon::Dragon(): firepower(10)
{

}

Dragon::~Dragon()
{


}

Dragon::Dragon(int a): firepower(a)
{

}

void Dragon::run()
{
    cout << "running" << speed*5 << endl;
}


void Dragon::fireattack()
{
    cout << " Fireattack" << firepower << " Power" << endl;
}

void Dragon::fly()
{
    cout << "Flying" << speed*5 << " per minute" <<endl;
}


Wolf::Wolf()
{
    icepower = 0;
}

Wolf::~Wolf()
{


}

void Wolf::run()
{
    cout << " sprinting " << speed << endl;
}

void Wolf::iceattack()
{
    cout << " iceattack" << icepower << endl;
}


