/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Sum
 *          
 */

//System Libraries
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
    int num, //User input
        sum = 0; //Sum accumulator
    
    //Initialize or input i.e. set variable values
    do { //Ask for user input unless number is less than 0
        cin >> num;
    }while (num < 0);
    
    for(int i = 1; i <= num; i++)
            sum += i; 
            cout << "Sum = " << sum;
        
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
