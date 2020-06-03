/*
CH08-320142
a5 p4.cpp
Subid Basaula
s.basaula@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string.h>

using namespace std;


string TournamentMember::location="Munich";

TournamentMember::TournamentMember()
{
    cout << "Base constructor is called\n" <<endl;
    strcpy(firstname, "firstname"); //setting default values
    strcpy(lastname, "lastname");
    strcpy(dob, "1980-1-1");
    club = "";
    age = 0;

}


Player::Player()
{
    cout << "Player default constructor is called" <<endl;
}


Player::~Player()
{
    cout << "Player destructor is called" << endl;
}



Referee::Referee()
{
    cout << "Referee constructor is called" << endl << endl;
    yellowCardCount = redCardCount =0;
}

bool Referee::addToYellowCardList(Player *p)
{
    for(int i = 0; i < yellowCardCount; i++)
    {
        if (yellowCardList[i] == p)
        {
            for(int j = i + 1; j < yellowCardCount; j++)
            {
                yellowCardList[j - 1] = yellowCardList[j];
            }
            yellowCardCount--;
            addtoRedCardlist(p);
            return false;
        }
    }

    yellowCardList[yellowCardCount] = p;
    yellowCardCount++;
    return true;
    /* If the player who is not on the yellow card list gets
    his first yellow card, he's added to the yellow card list,
    but if it his 2nd yellow card, he's removed from the yellow
    card list and added to the red card list */
}

bool Referee::addtoRedCardlist(Player *p)
	{
	redCardList[redCardCount]=p;
	redCardCount++;
	return true;
	}

void Referee::setYellowCardCount(int y)
{
    yellowCardCount = y;
}

int Referee::getYellowCardCount()
{
    return yellowCardCount;
}

void Referee::setRedCardCount(int r)
{
    redCardCount = r;
}

int Referee::getRedCardCount()
{
    return redCardCount;
}


Referee::~Referee()
{
    cout << "Referee destructor is called" <<endl;
}

TournamentMember::~TournamentMember()
{
    cout << "\nbase destructor is called" <<endl;
}

