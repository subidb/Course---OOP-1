#ifndef CITIES_H
#define CITIES_H
#include <iostream>

using namespace std;

class Cities
{

    private:
    string name;
    int population;
    string mayor;

    public:

    Cities();
    //Cities(string, string, int);
    ~Cities();

    void setName(string &newname);
    void setPopulation(int newp);
    void setMayor(string m);

    string getMayor() const;
    int getPopulation();

    void print();

};

#endif // CITIES_H
