#include <iostream>

using namespace std;
#include "Creature.h"

Creature::Creature(): speed(10)
{
    //cout << "Creature(base) constructor" << endl;
}

void Creature::setSpeed(int x)
{
    speed = x;
}

int Creature::getSpeed() const
{
    return speed;
}

void Creature::run() const
{
    cout << "running : " << speed << " meters" <<endl;
}

void Creature::attack()
{
    cout << "attack :" << speed << " power" << endl;
}

Direwolf::Direwolf()
{
    //cout << "Direwolf constructor" << endl;
    icepower = 10;
}

void Direwolf::sprint() const
{
    cout << "sprinting : " << speed+1<< "meters/s" << endl;
}

void Direwolf::attack()
{
    cout << "iceclaw : " << icepower << "power" << endl;
}

Dragon::Dragon(): flyfactor(4)
{
    //cout << "Dragon constructor" << endl;
    firepower = 20;
}

void Dragon::fly() const
{
    cout << "flying: " << speed*flyfactor << " meters/s" << endl;
}

void Dragon::attack()
{
    cout <<"Firefang: " << firepower << " power" <<endl;
}

Icedragon::Icedragon(): icepower(15)
{
   // cout << "Icedragon constructor" << endl;
}

void Icedragon::attack()
{
    cout << "Icefang :" << icepower << "power" << endl;
}

Direwolf::~Direwolf()
{

}

Dragon::~Dragon()
{

}

Icedragon::~Icedragon()
{

}

Creature::~Creature()
{
    //dtor
}
