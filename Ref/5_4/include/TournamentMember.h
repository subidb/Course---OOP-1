/*
CH08-320142
a5 p4.cpp
Subid Basaula
s.basaula@jacobs-university.de
*/

#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <iostream>
#include <string.h>


using namespace std;
class TournamentMember
{
    protected:
        char firstname[36]; //creating a character array
        char lastname[36];
        char dob[11];
        static string location; //static makes all the instances of the variable
        //point to the same memory. so when variable is modified in 1 translation unit
        //it gets modified across all translation units
        int age;
        string club;


    public:

        TournamentMember();
        TournamentMember(char* ,char*, char*, int, string&);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();


        void setFirstname(char* nfn);
        void setLastname(char* nfn);
        void setDob(char* ndob);
        void setAge(int nage);
        void setClub(string& nc);

        int getAge();
        static string getLocation();
        static void setLocation(string a); //declaring a method to change the location
        void print();


};
//using inline basically copy pastes the body of the function
// when it's "called" instead of jumping
inline void TournamentMember::setFirstname(char* nfn)
{
    strcpy(firstname,nfn);
}

inline void TournamentMember::setLastname(char* nfn)
{
    strcpy(lastname,nfn);
}

inline void TournamentMember::setDob(char* ndob)
{
    strcpy(dob,ndob);
}

inline void TournamentMember::setAge(int nage)
{
    age = nage;
}

inline void TournamentMember::setClub(string& nc)
{
    club = nc;
}

inline void TournamentMember::setLocation(string a)
{
    location = a; // function to change the location
}

inline string TournamentMember::getLocation()
{
    return location;
}

inline int TournamentMember::getAge()
{
    return age;
}

class Player: public TournamentMember
//'Player' can now inherit all properties from "TournamentMember"
{
    private:
        int number;
        int gs;
        string position;
        string foot;

    public:
        Player();
        Player(const Player&);
        ~Player();

        void setNumber(int nnumber);
        void setPosition(string& pos);
        void setFoot(string& nfoot);

        int  getNumber();
        void addGS(int ngs);
        int add2GS();
        void print();

};

inline void Player::addGS(int ngs)
{
    gs = ngs+1;
}

inline int Player::add2GS()
{
    return gs;
}

inline void Player::setNumber(int nnumber)
{
    number = nnumber;
}

inline int Player::getNumber()
{
    return number;
}

inline void Player::setPosition(string& pos)
{
    position = pos;
}

inline void Player::setFoot(string& nfoot)
{
    foot = nfoot;
}

class Referee: public TournamentMember
{
    int yellowCardCount, redCardCount;
    Player* yellowCardList[40];
    Player* redCardList[40];

    public:

    //Referee(){yellowCardCount = redCardCount =0;}
    Referee();
    ~Referee();
    bool addToYellowCardList(Player*);
    bool addtoRedCardlist(Player*);
    void setYellowCardCount(int y);
    int getYellowCardCount();
    void setRedCardCount(int r);
    int getRedCardCount();

};


#endif // TOURNAMENTMEMBER_H
