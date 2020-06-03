#include <iostream>
#include "Cities.h"

using namespace std;

int main()
{
    Cities London, Madrid, Paris;

    //Berlin = Cities("Berlin", "Hummels", 100);
    string name2 = "London";
    string name1 = "Madrid";
    string name3;

    getline(cin,name3);

    London.setName(name1);
    London.setPopulation(500000);
    London.setMayor("Wilshere");

    Madrid.setName(name2);
    Madrid.setPopulation(500321);
    Madrid.setMayor("Ramos");

    Paris.setName(name3);

    London.print();
    Madrid.print();
    Paris.print();

}
