/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: MPG
 *          
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float GALLON = 0.264179;
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
            
    //Declare Variables

  float lters, //Liters
        mles, //Miles
        mpg, //MPG
        gal; //Gallon
    char inpt;
    
    inpt = 'y';
    //Initialize or input i.e. set variable values
    while (inpt == 'y') //Will always be true unless user terminates loop
    {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lters;
        
        cout << endl << "Enter number of miles traveled:" << endl;
        cin >> mles;
        cout << endl << "miles per gallon:";
        gal = (lters * GALLON);
        mpg = mles / gal;
        
        cout << fixed << setprecision(2);
        cout << endl << mpg << endl;
        
        cout << "Again:" << endl;
        cin >> inpt;
        if(inpt == 'y')
            cout << endl;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
