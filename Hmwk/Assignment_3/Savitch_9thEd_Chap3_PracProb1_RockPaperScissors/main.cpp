/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 9:00 PM
 * Purpose: Rock, Paper, Scissors
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char ply1, //Variable to hold player 1's choice
         ply2; //Variable to hold player 2's choice
    
    
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    cin >> ply1 >> ply2;
    
    if(ply1 == ply2) //If both players pick the same choice
        cout << "Nobody wins" << endl;
    else if(ply1 == 'P') //If player 1 picks paper
    {
        if(ply2 == 'R') //If player 2 picks rock
        cout << "Paper covers rock.";
        else cout << "Scissors cuts paper.";
    }else if (ply1 == 'R') //If player 1 picks rock
    {
        if(ply2 == 'P') //If player 2 picks paper
        cout << "Paper covers rock.";
        else cout << "Rock breaks scissors.";
    }else 
    {
        if(ply2 == 'P') //If player 2 picks paper
        cout << "Scissors cuts paper.";
        else cout << "Scissors cuts paper.";
    }
    
  

    //Exit stage right or left!
    return 0;
}
