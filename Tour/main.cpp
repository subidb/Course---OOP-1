#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    TournamentMember x,c;
    x.print();


    cout << "\n\n";

    char* fnbale = (char*)"Gareth";
    //char* lnbale = "Bale";
    char* dobbale = (char*)"1989-07-16";



    TournamentMember Bale(fnbale, (char*)"Bale", dobbale,87);
    Bale.setRating(86);
    Bale.print();

    c = TournamentMember(Bale);
    c.print();

    Player y;
    y.print();

    Player Neymar((char*)"Neymar", (char*)"DosSantos", (char*)("1995-02-05"), 91, 20 , "LW");
    Neymar.inGoals(5);
    Neymar.print();

    string s;
    getline(cin,s);
    char *cx = (char*)"Neymar Jr.";

    Neymar.setFname(cx);

    Neymar.setPosition(s);

    Neymar.Goalsplus();


    Player Neymar2(Neymar);
    Neymar2.print();

    Referee r((char*)"Michael", (char*)"Oliver", (char*)("1970"),40, 23, 6 );

    r.print();
    r.addyc(3);
    r.rcplus();
    r.setFname((char*)"John");
    r.setLname((char*)"Moss");

    Referee r2(r);
    r2.print();
}
