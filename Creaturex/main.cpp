#include <iostream>
#include <Creature.h>

using namespace std;

int main()
{

    Dragon d;
    d.fly();

    Wolf w;

    Creature *c1 = &d;
    Creature *c2 = &w;

    c1->run();
    c2->run();

}
