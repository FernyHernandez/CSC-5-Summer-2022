/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 9:00 PM
 * Purpose: Homework Problem 3 / Sales Tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global ConstantS
   const float SALSTX = 0.4, //State sales tax doesn't change
               CONTYSLSTX = 0.2; //County sales tax also remains constant 
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the Random Number Seed
     
    //Declare Variables
    unsigned short int prchse; //Purchase amount before tax
    unsigned short int totl; //Purchase amount after sales tax and county sales tax have been calculated
    
    //Initialize Variables
    prchse = 95.00; //Purchase amount
    
    //Map inputs to outputs -> The Process
    totl = prchse * SALSTX * CONTYSLSTX;
    
    //Display Results
  
    cout << "Purchase price $" << prchse;
    cout << "\nTotal sales tax on a $" << prchse << " purchase";
    cout << " = $" << totl;
    
    //Exit stage right
    return 0;
}

