/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 8:30 PM
 * Purpose: Homework Problem 2 / Sales Prediction
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
    float totlSalsPerctge, //Percent of total sales
            totlSalsThsYr; //Sales this year
    
    
    //Initialize Variables
    totlSalsPerctge = .58; //58 percent generated in total sales
    totlSalsThsYr = 8.6e6; //8.6 million in sales this year
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    
    cout << "The East Coast sales Division will generate ";
    cout << totlSalsPerctge * totlSalsThsYr;
    cout << " percent of total sales.";
    
    //Exit stage right
    return 0;
}

