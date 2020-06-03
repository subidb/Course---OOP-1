/*
CH08-320142
a5 p4.cpp
Subid Basaula
s.basaula@jacobs-university.de
*/


#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main()
{

    Player Pique, Ramos, Marcelo;

    Pique.setFirstname((char*)"Gerard");
    Pique.setLastname((char*)"Pique");
    Pique.setDob((char*)"1987-02-02");
    Pique.setAge(34);

    Ramos.setFirstname((char*)"Sergio");
    Ramos.setLastname((char*)"Ramos");
    Ramos.setDob((char*)"1986-03-30");
    Ramos.setAge(32);

    Marcelo.setFirstname((char*)"Marcelo");
    Marcelo.setDob((char*)"1988-05-28");
    Marcelo.setAge(30);

    //Ramos.print();
    Referee R;
    cout << "___________________________________________________________________________________\n" <<endl;
    cout << "Total Players with yellow cards at the start of the game = " << R.getYellowCardCount() << endl;
	cout << "Total Players with red cards at the start of the game = "<< R.getRedCardCount() << endl <<endl;


	cout << "LIVE COMMENTRY - BARCELONA VS REAL MADRID!" << endl;


    //Adding the players to the yellow card list
	if(R.addToYellowCardList(&Marcelo) == true)
		{
		    cout << "\nMarcelo gets a yellow card in a failed attempt to stop Messi.\n";
		}
    if(R.addToYellowCardList(&Pique) == true)
		{
        cout << "Pique gets a yellow card for handball." ;
		cout <<"\nPique gets a 2nd yellow card for pulling Bale's Shirt!RED! Pique is sent OFF"<< endl << endl;
		}

    if(R.addToYellowCardList(&Pique) == true)
		{
		    cout << "" << endl;
		}
    //adding players to the red card list
	if(R.addtoRedCardlist(&Ramos) == true)
		{
        cout << "Ramos starts arguing with the ref " ;
		cout << "after a Rash Challenge on Suarez.\nIt's a straight RED! Ramos is sent OFF!" <<endl << endl;
		}



    //printing the result after addition
    cout << "Total Players with yellow cards after the game = " << R.getYellowCardCount()<< endl;
	cout << "Total Players with red cards after the game = "<< R.getRedCardCount() << endl;
    cout << "___________________________________________________________________________________\n" <<endl;
}
