/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:11 PM
 * Purpose: Diet Coke
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
    int lbsW, //Weight in lbs
        soda; //Limit # of soda cans to be consumed
    
    //Initialize or input i.e. set variable values
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> lbsW; //Asking user for weight in pounds
   
    
    //Map inputs -> outputs
    soda = ((lbsW * 453.592) * (.14285714285)) / .35; //Formula to calculate number of sodas
    
    
    //Display the outputs
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << soda << " cans";
  

    //Exit stage right or left!
    return 0;
}
