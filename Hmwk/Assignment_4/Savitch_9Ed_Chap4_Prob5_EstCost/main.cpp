/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Estimated Cost
 *        
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int PERCENT = 100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
       //Declare Variables
    float inflRte, //Inflation rate
          prceYr, //Price in one year
          prceYr2, //Price in two year
          crntP, //Current price
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
    inflRte = ((crntP - yragP) / yragP) * PERCENT;
    cout << "Inflation rate: " << inflRte << "%" << endl; //Current price minus year ago price, divided by year ago price, times 100, in that order
    cout << endl;
    
   
    prceYr = (((inflRte / 100)* crntP)+ crntP);
    cout << "Price in one year: $" << prceYr << endl;
    
    prceYr2 = (((inflRte / 100)* prceYr) + prceYr);
    cout << "Price in two year: $" << prceYr2 << endl;
    
    cout << endl << "Again:";
    cout << endl;
    cin >> quit;
    if(quit == 'n') //If user types n loop ends
        break;
    cout << endl;
}while (quit == 'y');


    
    //Exit stage right or left!
    return 0;
}

