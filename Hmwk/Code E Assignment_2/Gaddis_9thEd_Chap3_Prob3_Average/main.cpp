/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 6:56 PM
 * Purpose: Calculating Average 
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
    
    //Declare Variables
    float num1, num2, num3, num4, num5, avrg, total; //Initializing variables to be used
    
    
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl; //Asking user to input numbers to be averaged
    cin >> num1 >> num2 >> num3 >> num4 >> num5; //User input
    
    
    //Map inputs -> outputs
    total = num1 + num2 + num3 + num4 + num5; //Initializing total to be divided by number of tests, 5
    avrg = total / 5; //Average calculated by dividing by number of tests(5)
    
    
    //Display the outputs
    cout << fixed << setprecision(1); //Formatting, One point of precision
    cout << "The average = " << avrg;
   

    //Exit stage right or left!
    return 0;
}

