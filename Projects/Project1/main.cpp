/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 24, 2022, 7:11 PM
 * Purpose: Project 1
 *          
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
 srand(static_cast<unsigned int>(time(0)));
 
 //Declare variables
 int usrsGs,
     dceR1,
     dceR2,
     total;
 float amntBt,
       pssiblty,
       plysMny;
    


cout << "Welcome to Dice Rolling!";
cout << "May the Odds be with you";

cout << " What's your guess?(2-12): ";
cin >> usrsGs;

cout << " Amount to Bet ($1-$1000): ";
cin >> amntBt;

cout << endl;

dceR1 = rand() % 6 + 1;
dceR2 = rand() % 6 + 1;

total = dceR1 + dceR2;



switch (usrsGs)
{

case 1: 
    pssiblty = 1; 
    
case 2: 
    pssiblty = 2; 
   
case 3: 
   pssiblty = 3; 
   
case 4: 
    pssiblty = 4; 
    
case 5: 
    pssiblty = 5; 
   
case 6: 
    pssiblty = 6; 
    
case 7: 
   pssiblty = 5; 
   
case 8: 
   pssiblty = 4; 
    
case 9: 
    pssiblty = 3; 
   
case 10: 
    pssiblty = 2;
   
case 11: 
    pssiblty = 1; 
   
}

cout << " For your $" << amntBt << " bet, the roll is" << endl;
cout << endl;

if (dceR1 == 1)
{
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
}
else if (dceR1 == 2)
{
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
}
else if (dceR1 == 3)
{
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
}
else if (dceR1 == 4)
{
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
}
else if (dceR1 == 5)
{
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
}
else if (dceR1 == 6)
{
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
}

cout << endl;

if (dceR2 == 1)
{
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
}
else if (dceR2 == 2)
{
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
}
else if (dceR2 == 3)
{
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
}
else if (dceR2 == 4)
{
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
}
else if (dceR2 == 5)
{
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
}
else if (dceR2 == 6)
{
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
}


cout << " For a total of " << total << endl;
cout << endl;


if (usrsGs == total)
{

    plysMny = amntBt * 8 / pssiblty;

    cout << " You were correct... since " << usrsGs << " can come up " << pssiblty<< " ways," << endl;
    cout << "You win $" << amntBt << "* 8 /" << pssiblty << "= $" << plysMny << endl;
}

else
{

    plysMny = pssiblty* amntBt;
    cout << " I'm sorry you lost, since " << usrsGs << " can come up " << pssiblty << " ways," << endl;
    cout << " You lost " << pssiblty << "*$" << amntBt << "= $" << plysMny << " dollars!!!!!!" << endl;
    
}//else
return 0;
}