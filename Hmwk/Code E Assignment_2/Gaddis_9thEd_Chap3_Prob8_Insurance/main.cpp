/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:01 PM
 * Purpose: Insurance on home based on 80% coverage
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
     float insrncAmt = .8, //Insurance amount needs to be 80 percent of house worth
           hseWrth, //Variable to hold the worth of house
           hswInsrnc; //variable that will store the amount of house insurance needed
    
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> hseWrth;
    
    //Map inputs -> outputs
    hswInsrnc = hseWrth * insrncAmt; //Equation to calculate amount of house insurance
    
    
    //Display the outputs
    
    cout << "You need $" << hswInsrnc << " of insurance.";

    //Exit stage right or left!
    return 0;
}
