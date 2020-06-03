#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>

using namespace std;
#include "Creature.h"

class Creature
{
    protected:
        int speed;
    public:
        void setSpeed(const int s);
        int getSpeed() const;
        virtual void attack() = 0;
        virtual void sound() = 0;

        Creature();
        virtual ~Creature();
        void run() const;
};

class Direwolf: public Creature
{
    private:
        int icepower;

    public:
        Direwolf();
        ~Direwolf();
        void sprint()const;
        void attack();
        void sound();


};
inline void Direwolf :: sound()
{
            cout << "Screech = 150" << endl;
}

class Dragon: public Creature
{
    protected:
        int firepower;
        int flyfactor;
    public:
        Dragon();
        ~Dragon();
        void fly ()const;
        void attack();
        inline void sound()
        {
        cout << "Screech = 400" << endl;
        }

};



class Icedragon: public Dragon
{
    private:
        int icepower;
    public:
        Icedragon();
        ~Icedragon();
        void attack();
        inline void sound()
    {
    cout << "Roaw" << endl;
    }
};



#endif // CREATURE_H
