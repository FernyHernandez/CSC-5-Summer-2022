/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Rectangle
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
    char ltter; //X/Y for output
    int num, //User input
        rwN, //Row
        clmnN; //Column
    
    //Initialize or input i.e. set variable values
    cin >> num >> ltter;
    
    //Map inputs -> outputs
    while (num > 15 || num < 1) //Input validation
    {
        cout << "Only numbers less than 15 and greater than 0 are accepted.";
        cin >> num  >> ltter;
    }
    for (clmnN = 1; clmnN < num; clmnN++) //Outer loop controls columns
    {
        for (rwN = 1; rwN <= num; rwN++) //Inner loop controls rows
        {
            cout << ltter;
        }
        cout << endl;
    }
    for (; clmnN == num; clmnN++)
    {
        for (rwN = 1; rwN <= num; rwN++)
        {
            cout << ltter;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
