/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on June 30, 2022, 10:00 PM
 * Purpose: Homework Problem 4 / Average of Values
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
  
    float avrge; //Variable that will hold average
    
    //Initialize Variables
    const int FIVE = 5; //Dividing by 5 would give us the average
    float a = 28, //The five numbers that need to be stored in variables
          b = 32,
          c = 37,
          d = 24,
          e = 33,
          sum = a + b + c + d + e; //Total of all variables added together
  
    //Map inputs to outputs -> The Process
    avrge = sum / FIVE;
    
    //Display Results
    cout << fixed << setprecision(1) << showpoint;
    cout << avrge;
    
    //Exit stage right
    return 0;
}

