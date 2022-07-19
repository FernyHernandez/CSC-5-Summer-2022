/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:20 PM
 * Purpose: Sum of Positive, Negative, and Both types of numbers
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
    int total,
        num,
        ngtvSm = 0, //Negative sum accumulator
        pstvSm = 0, //Positive sum accumulator
        pstvC = 0, // + Counter
        ngtvC = 0; // - Counter
        

    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    for (int i = 0; i<10; i++) //For loop that adds positive numbers to the positive sum, negative numbers to negative sum
    {
        cin >> num;
    if (num >= 0) //If number is greater or equal to zero than add to postive sum and increase postive counter
    {
        pstvSm += num;
        pstvC++;
    }
    else //Any other number not greater than 0 is added to Negative sum, Negative counter increased
    {
        ngtvSm += num;
        ngtvC++;
    }
    }
    
    //Map inputs -> outputs
    total = pstvSm + ngtvSm; //Total is calculated by adding Positive sum and Negative sum
    
    //Display the outputs
    cout << "Negative sum =" << setw(4) << ngtvSm << endl; //Output is formatted with four spaces of width
    cout << "Positive sum =" << setw(4) << pstvSm << endl;
    cout << "Total sum    =" << setw(4) << total;

    //Exit stage right or left!
    return 0;
}