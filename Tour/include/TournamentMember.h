#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

class TournamentMember
{
    protected:
        char fname[36];
        char lname[36];
        char dob[11];
        static string location;
        int rating;

    public:
        TournamentMember();
        ~TournamentMember();
        TournamentMember(const TournamentMember&);
        TournamentMember(const char* , char*, char*, int);

        //string slocation();

        void setFname(const char*);
        char getFname();
        void setLname(char*);
        char getLname();
        void setDob(char* d);
        char getDob();
        inline void setRating(int r)
        {
            rating = r;
        }
        int getRating();

        void print();

};

inline void TournamentMember::setFname(const char* n)
{
    strcpy(fname,n);
}

inline void TournamentMember::setLname(char* n)
{
    strcpy(lname,n);
}

inline void TournamentMember::setDob(char* n)
{
    strcpy(dob,n);
}

/*inline void TournamentMember::setRating(int n)
{
    rating = n;
}*/

inline char TournamentMember::getFname()
{
    return *fname;
}

inline char TournamentMember::getLname()
{
    return *lname;
}

inline char TournamentMember::getDob()
{
    return *dob;
}



inline void TournamentMember::print()
{
    cout << fname << " " << lname << endl;
    cout << dob << endl;
    cout << "Rating = " << rating;
    cout << "\nlocation = " << location <<endl;
}


class Player: public TournamentMember
{
    private:
        int goals;
        string position;

    public:
        Player();
        ~Player();
        Player(const Player&);
        //Player(const string, int);
        Player(const char*, char*, char*, int, int, const string);
        void inGoals(int);
        int Goalsplus();
        void setPosition(string&);
        int ingoals();
        void print();

};



inline int Player::Goalsplus()
{
    return this->goals++;
}

inline void Player::setPosition(string& p)
{
    position = p;
}



inline void Player::print()
{
    cout << fname << " " << lname << endl;
    cout << dob << endl;
    cout << "Rating: " << rating;
    cout << "\nlocation: " << location <<endl;
    cout << "Position:" << position << endl;
    cout << "goals scored:" << goals << endl;
}


class Referee: public TournamentMember
{
    private:
        int ycount;
        int rcount;
        Player* Ylist[40];
        Player* Rlist[40];

    public:
        Referee();
        ~Referee();
        Referee(const char*, char*, char*, int, int, int);
        Referee(const Referee&);

        bool addtoyc(Player*);
        bool addtorc(Player*);
        void addyc(int);
        int rcplus();
        void print();
};

inline void Referee::addyc(int a)
{
    ycount = ycount + a;
}

inline int Referee::rcplus()
{
    return (rcount++);
}

inline void Referee::print()
{

    cout << fname << " " << lname << endl;
    cout << dob << endl;
    cout << "Rating: " << rating;
    cout << "\nlocation: " << location <<endl;
//    cout << "Position:" << position << endl;
  //  cout << "goals scored:" << goals << endl;
    cout << "Yellow Cards given:" << ycount << endl;
    cout << "Red Cards given:" << rcount << endl;

}






#endif // TOURNAMENTMEMBER_H
