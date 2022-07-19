/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 8:00PM
 * Purpose: Homework Problem 1 / Sum of Two Numbers
 */

//System Libraries
#include <iomanip>
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
            float num1, //50
                  num2, //100
                  total; //Sum of both numbers
    
    //Initialize Variables
    num1 = 50; //50 is the first number to be stored in variable num1
    num2 = 100; //100 is second number to be stored in variable num1 and added to num2
    total = num1 + num2; //num1 + num2
    
          
    
    //Map inputs to outputs -> The Process
    total = num1 + num2; 
    
    
    //Display Results
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num1 << " + " << num2 << " = " << total;
    
    //Exit stage right
    return 0;
}

