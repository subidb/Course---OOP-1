#ifndef CREATURE_H
#define CREATURE_H


class Creature
{
    protected:
        int speed;

    public:
        Creature();
        Creature(int);
        ~Creature();
        virtual void run()=0;


};


class Dragon: public Creature
{
    private:
        int firepower;

    public:
        Dragon();
        ~Dragon();
        Dragon(int);

        void run();
        void fly();
        void fireattack();


};

class Wolf: public Creature
{
    private:
        int icepower;

    public:
        Wolf();
        ~Wolf();
        Wolf(int);

        void run();
        void iceattack();


};


#endif // CREATURE_H
