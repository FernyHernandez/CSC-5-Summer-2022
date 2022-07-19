/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Pay in Pennies
 *          
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
    const int INCREMENT = 2;
    int days;
    float sum = 0,
          pay = .01;
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
 
    //Display the outputs

 
   if (days < 1)
   {
       cout << "No number less than 1 accepted.";
       cout << "Please try again:";
       cin >> days;
       
   }else if(days >= 1)
        cin >> days;
   
   for(int i = 1; i <= days; i++)
   {
       
       sum += (pay*100) / 100;
       pay *= INCREMENT;
    
   }
 
   cout << "Pay = $" << sum;
   
    
    //Exit stage right or left!
    return 0;
}