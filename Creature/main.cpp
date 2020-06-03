#include <iostream>

using namespace std;
#include "Creature.h"

int main()
{

//    Creature c;
    //int n;
    //cout << "Enter default speed for your creature" << endl;
    //cin >> n;o
    //c.setSpeed(n);

    cout << "\nCreatures:" << endl;
//  c.run();

    Direwolf w;
    Creature * w1 = &w;
    Creature * w2 = &w;
    cout << "\nDirewolf:" << endl;
    w.run();
    w.sprint();
    w1->attack();
    w2->sound();

    Dragon d;
    Creature * d1 = &d;
    Creature * d2 = &d;
    cout << "\nDragon:" << endl;
    d.fly();
    d1->attack();
    d2->sound();

    Icedragon i;
    Creature * i1 = &i;
    cout << "\nIcedragon:" <<endl;
    i.fly();
    i1->attack();


}
