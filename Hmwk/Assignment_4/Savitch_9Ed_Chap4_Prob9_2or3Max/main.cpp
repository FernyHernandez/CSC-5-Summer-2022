/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: 2 or 3 Max
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
    float num1, //Number 1
          num2, //Number 2 
          num3; //Number 3
    
    //Initialize or input i.e. set variable values
    cin >> num1 >> num2 >> num3; //User input
    
    //Map inputs -> outputs
    cout << "Enter first number:" << endl;
    cout << endl << "Enter Second number:" << endl;
    cout << endl << "Enter third number:" << endl << endl;
    
    cout << "Largest number from two parameter function:\n";
    if(num1 > num2) //If number 1 is greater than number 2, number 1 will be displayed
    {
        cout << num1;
        cout << endl;
    }
    else //If number 1 is not greater than number 2, number 2 will be displayed
    {
        cout << num2;
        cout << endl;
    }
    
    
    cout << endl;
    cout << "Largest number from three parameter function:\n";
    if(num1 > num2 && num1 > num3) //If number 1 is greater than number 2 and 3, number 1 will be displayed
    {
        cout << num1 << endl;
    }
    else if(num2 > num1 && num2 > num3) //If number 2 is greater than number 1 and 3, number 2 will be displayed
    {
        cout << num2 << endl;
    }
    else if(num3 > num1 && num3 > num2)  //Else if number 3 is greater than number 1 and number 2, number 3 will be shown
    {
        cout << num3 << endl;
    }
    //Exit stage right or left!
    return 0;
}