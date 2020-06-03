#include "TournamentMember.h"
#include <iostream>

using namespace std;


//string TournamentMember::location="Munich";

string TournamentMember::location = "Paris";

TournamentMember::TournamentMember()
{
    cout << "Default constructor\n" << endl;
    strcpy(fname,"Name");
    strcpy(lname,"LastName");
    strcpy(dob,"0000-00-00");
    rating = 0;

}


TournamentMember::TournamentMember(const char* f, char* l, char * d, int r): rating(r)
{
    cout << "\nParametric constructor\n" << endl;
    strcpy(fname,f);
    strcpy(lname,l);
    strcpy(dob,d);
}

TournamentMember::TournamentMember(const TournamentMember& c)
{
    cout << "\nCopy constructor" << endl;
    strcpy(this->fname, c.fname);
    strcpy(lname, c.lname);
    strcpy(dob, c.dob);
    rating = c.rating;
}


TournamentMember::~TournamentMember()
{
    cout << "\nDestructor" << endl;
}

Player::Player(): TournamentMember()
{
    goals = 0;
    position = "Pos";
}

Player::Player(const char* a, char* b, char* c, int d, int g, const string p): TournamentMember(a,b,c,d)
{
    position = p;
    goals = g;
}

Player::Player(const Player& c): TournamentMember(c)
{

    goals = c.goals;
    position = c.position;
}

void Player::inGoals(int n)
{
    goals = goals + n;
}

Player::~Player()
{

}

Referee::Referee(): TournamentMember()
{
    ycount = 0;
    rcount = 0;
}

Referee::Referee(const char* a, char* b, char* c, int d, int e, int f): TournamentMember(a,b,c,d), ycount(e)
{
    rcount = f;
}

Referee::Referee(const Referee& c): TournamentMember(c)
{
    ycount = c.ycount;
    rcount = c.rcount;
}

Referee::~Referee()
{

}


