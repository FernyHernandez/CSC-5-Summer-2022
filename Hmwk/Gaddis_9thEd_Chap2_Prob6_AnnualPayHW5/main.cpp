/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 10:30 PM
 * Purpose: Homework Problem 5 / Annual Pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the Random Number Seed
     
    //Declare Variables
    
    float pyPrds, //Number of Pay Periods
          pyAmnt, //Amount of Pay employee earns each period
          annlPy; //Employee annual pay
    
    //Initialize Variables
    pyPrds = 26; //26 Pay Periods in a year
    pyAmnt = 2200.0; //2200 each pay period / biweekly
    
            
    //Map inputs to outputs -> The Process
    annlPy = pyAmnt * pyPrds;
    
    //Display Results
    cout << "Annual Pay = $" << annlPy << endl;
    
    //Exit stage right
    return 0;
}

