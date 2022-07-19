/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:04 PM
 * Purpose: Converting Fahrenheit to Celsius
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F, //Fahrenheit
          C; //Celsius
    
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> F; //Gathering Fahrenheit from user to convert to Celsius
    
    //Map inputs -> outputs
     C = 5 * (F - 32) /9; //Formula to convert Fahrenheit to Celsius
    
    //Display the outputs
    
    cout << fixed << setprecision(1) << F; //Formatting output
    cout << " Degrees Fahrenheit = " << C;
    cout << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}

