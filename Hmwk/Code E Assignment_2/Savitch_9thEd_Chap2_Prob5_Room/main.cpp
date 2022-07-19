/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:18 PM
 * Purpose: Calculating Room Occupancy/Limits 
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
    int maxCpty; //Maximum capacity allowed in the room
    int nmPpl; //Number of people that will be there
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl; //Gathering user input 
    cin >> maxCpty >> nmPpl;
    
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (nmPpl > maxCpty){ //Conditions under which meetings cannot be held, if number of people is greater than max capacity
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << (nmPpl - maxCpty); //Reduce number of people by max capacity to avoid a violation
        cout << " to avoid fire violation.";
    }
    else if (nmPpl <= maxCpty){ //Conditions under which the meeting can continue, if number of people is less than or equal to the max capacity
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << (maxCpty - nmPpl) << " will be allowed without violation.";
    }
    

    //Exit stage right or left!
    return 0;
}