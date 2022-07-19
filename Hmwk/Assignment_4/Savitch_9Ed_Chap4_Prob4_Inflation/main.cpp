/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 22, 2022, 7:11 PM
 * Purpose: Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const float PERCENT = 100; //Percent conversion
    //Declare Variables
    float crntP, //Current price
          yragP; //Year ago price
    char quit; //User input
    //Initialize or input i.e. set variable values
    quit = 'y';
    //Map inputs -> outputs
    
    //Display the outputs
do{
    cout << fixed << setprecision(2);
    cout << "Enter current price:" << endl;
    cin >> crntP;
    cout << "Enter year-ago price:" << endl;
    cin >> yragP;
    cout << "Inflation rate: " << ((crntP - yragP) / yragP) * PERCENT << "%" << endl; //Current price minus year ago price, divided by year ago price, times 100, in that order
    cout << endl;
    cout << "Again:";
    cout << endl;
    cin >> quit;
    if(quit == 'n') //If user types n loop ends
        break;
    cout << endl;
}while (quit == 'y');


    
    //Exit stage right or left!
    return 0;
}



