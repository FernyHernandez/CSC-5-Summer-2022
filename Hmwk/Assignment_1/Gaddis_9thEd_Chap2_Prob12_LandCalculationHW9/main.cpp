/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 11:00 PM
 * Purpose: Homework Problem 9 / Land Calculation
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the Random Number Seed
     
    //Declare Variables
    float totlAcrs; //Variable that will hold the total amount of acres in 391,873 sqft.
    
    //Initialize Variables
    const float ONEACRE = 43560; //One acre will always be 43,560 sqft.
    float numAcrs = 391876; //Total number of sqft. 
    
    //Map inputs to outputs -> The Process
    totlAcrs = numAcrs / ONEACRE; 
    
    //Display Results
    cout << fixed << setprecision(1) << showpoint;
    cout << "One acre of land is approximately " << ONEACRE << " square feet.\n";
    cout << "There are " << totlAcrs << " acres in a tract of land with " << numAcrs;
    cout << " square feet.";
    
    //Exit stage right
    return 0;
}

