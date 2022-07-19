/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 10:50 PM
 * Purpose: Homework Problem 10 / Circuit Board Price
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
    float prft, //Profit from company
          cst, //Cost of item
          sllngprce; //Selling price of company after profit is added
    
    //Initialize Variables
    prft = .35; //35 percent profit
    cst = 14.95; //Cost of circuit board
    
    //Map inputs to outputs -> The Process
    sllngprce = (cst * prft) + cst;
    
    //Display Results
    cout << fixed << setprecision(2) << showpoint;
    cout << "The selling price of a circuit board that costs $" << cst;
    cout << " is $" << sllngprce;
    
    //Exit stage right
    return 0;
}

