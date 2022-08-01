/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 31, 2022, 5:00 PM
 * Purpose: Project 2
 *          
 */

//System Libraries
#include <vector> //Vector libraries
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
void display(); 
void display(int [], int rolls = 3); //Overloaded functions, different parameter lists
void diceRoll(int &, int &); //Function uses Reference Variables
bool isEven(int);
void change(int &);
float showBets(vector<float>);

//Execution Begins Here!
int main(int argc, char** argv) {

 
ofstream outputFile; //Output file to greet player
outputFile.open("DiceGame.txt");
outputFile << "Hello!";
outputFile.close();
 
 ifstream inputFile;
 string banner;
        
 inputFile.open("DiceGame.txt");
 inputFile >> banner;
 cout << banner; //Displays banner
 
 //Set the random number seed
 srand(static_cast<unsigned int>(time(0)));;
 
 //Declare variables
 int ROLLS = 1; //Number of rolls
 change(ROLLS); //Changes number of rolls to 3
 int guess[ROLLS]; //array of all of players guesses
 vector<float> amntBet(ROLLS); //Vector of floats to hold all of players bets
 
 int dceR1, //Dice 1
     dceR2, //Dice 2
     total; //Dice 1 + Dice 2
 float pssiblty, //Odds
       plysMny; //Money owed from or to player
    
display();

for(static int i = 0; i < 3; i++){
cout << "What's your guess?(2-12): "; //(1-6) + (1-6)
cin >> guess[i]; //Users guess
if(guess[i] <= 1 || guess[i] > 12){
    cout << "ERROR: enter a number greater than 1 and less than 12: ";
    cin >> guess[i];
}

cout << "Amount to Bet ($1-$1000): ";
cin >> amntBet[i]; //Users bet amount $
cout << endl;

diceRoll(dceR1, dceR2); //Dice roll function call
//dceR1 = rand() % 6 + 1;//First dice(1-6)
//dceR2 = rand() % 6 + 1;//Second dice(1-6)

total = dceR1 + dceR2;//Dice 1 + Dice 2

switch (guess[i]) //Switch statement for possible outcomes
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

//Displays to player the two dice rolls and their amount bet
cout << "For your $" << amntBet[i] << " bet, the roll is" << endl;


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

cout << endl; //Blank space between dice for visual appeal

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

cout << "Total is " << total << endl; //Total of the two dices added together is displayed
cout << endl; //Blank line for visual appeal


if (guess[i] == total) //If the player guessed right
{
    plysMny = amntBet[i] * 8 / pssiblty; //Money Won

    cout << "You were correct, since " << guess[i] << " can come up " << pssiblty;
    cout << " way(s)," << endl;
    cout << "You win $" << amntBet[i] << " * 8 / " << pssiblty << " = $" << plysMny;
    cout << endl;
    cout << "Congratulations!.\n";
    cout << "Rerun program to play again.\n";
    exit(0);
}

else //If player guessed wrong, loses
{
    plysMny = pssiblty * amntBet[i]; //Money Lost

    cout << "I'm sorry you lost, since " << guess[i] << " can come up " << pssiblty;
    cout << " way(s)," << endl;
    cout << "You lost " << pssiblty << " * $" << amntBet[i] << " = $" << plysMny;
    cout << " dollars." << endl;
   
    if(isEven(guess[i])) //Bool function call checks current value in index
        cout << "Your guess was even.\n";
    else
        cout << "Your guess was odd.\n";
    
    cout << endl;
    
}
}
display(guess); //Displays all of the users guesses at the end of the program
cout << "were your guesses.";
cout << endl; //Blank line

showBets(amntBet);

return 0;
}

void display(){ //Displays introduction
cout << fixed << setprecision(2); //Formatting
cout << endl;
cout << "Welcome to Dice Rolling!" << endl;
cout << "May the Odds be with you" << endl;
cout << endl; //Blank line
}

void diceRoll(int &dce1, int &dce2){ //Function to roll dice
    dce1 = rand() % 6 + 1;//First dice(1-6)
    dce2 = rand() % 6 + 1;//Second dice(1-6)
}

void display(int guesses[], int size){ //Function that displays all of the users guesses
    for(int index = 0; index < size; index++){
        cout << guesses[index];
        cout << ", ";
    }
}

bool isEven(int num) //Bool function to determine is number entered is even or odd
{
    bool status;
    
    if(num % 2 == 0)
        status = true;
    else
        status = false;
    return status;
}

void change(int &r){ //Function that changes number of rolls from 1 to 3, passes by value
 r = 3;   
}

float showBets(vector<float> vect)
{
    for(int count = 0; count < vect.size(); count++)
        cout << "$" << vect[count] << ", ";
    cout << "were your bets.";
}