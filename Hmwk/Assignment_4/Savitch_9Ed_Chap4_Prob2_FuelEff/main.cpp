/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Fuel Eff
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
  float lters1, //Liters for car one
        mles1, //Miles for car one
        lters2, //Liters for car two
        mles2, //Miles for car two
        mpg1, //MPG for car one
        mpg2, //MPG for car two
        gal1, //Gallon one
        gal2; //Gallon two
    char inpt; //User input
    
    inpt = 'y';
    //Initialize or input i.e. set variable values
    while (inpt == 'y') //Will always be true unless user terminates loop
    {
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:";
        cin >> lters1;
        
        cout << endl << "Enter number of miles traveled:" << endl;
        cin >> mles1;
        cout << "miles per gallon: ";
        gal1 = (lters1 * GALLON);
        mpg1 = mles1 / gal1;
        
        cout << fixed << setprecision(2);
        cout << mpg1 << endl << endl;
        
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lters2;
        cout << "Enter number of miles traveled:" << endl;
        cin >> mles2;
        cout << "miles per gallon: ";
        gal2 = (lters2 * GALLON);
        mpg2 = mles2 / gal2;
        
        cout << fixed << setprecision(2);
        cout << mpg2 << endl << endl;
        
        if (mpg1 > mpg2)
        {
            cout << "Car 1 is more fuel efficient" << endl << endl;
        }
        else
             cout << "Car 2 is more fuel efficient" << endl << endl;
         
        cout << "Again:" << endl;
        cin >> inpt;
        if(inpt == 'y')
            cout << endl;
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}