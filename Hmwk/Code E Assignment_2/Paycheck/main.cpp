/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:09 PM
 * Purpose: Calculating Gross Pay
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
    float payRte, //Pay Rate
          hrsWrkd, //Hours worked
          payChck; //Paycheck amount
    
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> payRte >> hrsWrkd; //Asking user for pay rate and hours worked
    
    
    //Map inputs -> outputs
    payChck = payRte * hrsWrkd; //Pay check amount, current pay rate times hours worked
    payChck += hrsWrkd > 40?payRte * (hrsWrkd - 40):0; //Ternary operator
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint; //Formatted output
    cout << "Paycheck = $" << setw(7) << payChck;

    //Exit stage right or left!
    return 0;
}
