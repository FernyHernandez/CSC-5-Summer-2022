/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 24, 2022, 7:11 PM
 * Purpose: Project 1
 *          
 */

//System Libraries
#include <iomanip> //Formatting
#include <string> //String "Hello!"
#include <fstream> //Input file
#include <cstdlib> //Random number generator
#include <ctime> //Random number seed
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

 
ofstream outputFile;
outputFile.open("DiceGame.txt");
outputFile << "Hello!";
outputFile.close();
 
 ifstream inputFile;
 string banner;
        
 inputFile.open("DiceGame.txt");
 inputFile >> banner;
 cout << banner;
 
 //Set the random number seed
 srand(static_cast<unsigned int>(time(0)));;
 
 //Declare variables
 int usrsGs,//Users Guess
     dceR1, //Dice 1
     dceR2, //Dice 2
     total; //Dice 1 + Dice 2
 float amntBt, //Amount user bet
       pssiblty, //Odds
       plysMny; //Money owed from or to player
    
cout << fixed << setprecision(2); //Formatting
cout << endl;
cout << "Welcome to Dice Rolling!" << endl;
cout << "May the Odds be with you" << endl;

cout << endl;

for(int i = 0; i <= 3; i++){
cout << "What's your guess?(2-12): "; //(1-6) + (1-6)
cin >> usrsGs; //Users guess
if(usrsGs <= 1 || usrsGs > 12){
    cout << "Enter a number greater than 1 and less than 12: ";
    cin >> usrsGs;
}

cout << "Amount to Bet ($1-$1000): ";
cin >> amntBt; //Users bet amount $

cout << endl;

dceR1 = rand() % 6 + 1;//First dice(1-6)
dceR2 = rand() % 6 + 1;//Second dice(1-6)

total = dceR1 + dceR2;//Dice 1 + Dice 2

switch (usrsGs) //Switch statement for possible combinations
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

cout << "For your $" << amntBt << " bet, the roll is" << endl;


if (dceR1 == 1)
{
    cout << " ----------- " << endl; //Image if first dice roll is 1
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR1 == 2)
{
    cout << " ----------- " << endl; //Image if first dice roll is 2
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR1 == 3)
{
    cout << " ----------- " << endl; //Image if first dice roll is 3
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR1 == 4)
{
    cout << " ----------- " << endl; //Image if first dice roll is 4
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR1 == 5)
{
    cout << " ----------- " << endl; //Image if first dice roll is 5
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR1 == 6)
{
    cout << " ----------- " << endl; //Image if first dice roll is 6
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << " ----------- " << endl;
}

cout << endl;

if (dceR2 == 1)
{
    cout << " ----------- " << endl; //Image if second dice roll is 1
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR2 == 2)
{
    cout << " ----------- " << endl; //Image if second dice roll is 2
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR2 == 3)
{
    cout << " ----------- " << endl; //Image if second dice roll is 3
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR2 == 4)
{
    cout << " ----------- " << endl; //Image if second dice roll is 4
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR2 == 5)
{
    cout << " ----------- " << endl; //Image if second dice roll is 5
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
    cout << " ----------- " << endl;
}
else if (dceR2 == 6)
{
    cout << " ----------- " << endl; //Image if second dice roll is 6
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << " ----------- " << endl;
}

cout << "Total is " << total << endl;
cout << endl;


if (usrsGs == total) //If the player guessed right
{
    plysMny = amntBt * 8 / pssiblty; //Money Won

    cout << "You were correct, since " << usrsGs << " can come up " << pssiblty;
    cout << " way(s)," << endl;
    cout << "You win $" << amntBt << " * 8 / " << pssiblty << " = $" << plysMny;
    cout << endl;
}

else //If player guessed wrong, loses
{
    plysMny = pssiblty * amntBt; //Money Lost

    cout << " I'm sorry you lost, since " << usrsGs << " can come up " << pssiblty;
    cout << " way(s)," << endl;
    cout << " You lost " << pssiblty << " * $" << amntBt << " = $" << plysMny;
    cout << " dollars." << endl;
    cout << endl;
    
}
}
return 0;
}