/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Min Max
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
    int num,     //User input
        smllstN = 10000, //Smallest number
        largstN = 0; //Largest number
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
 while (num != -99) //Execute as long as user input does not equal -99
 {
     cin >> num;
if(num == -99) //If user input is -99 stop the loop
     break;
if (num > largstN)
    largstN = num;
if (num < smllstN)
    smllstN = num;
 }
 
    
    //Display the outputs
    cout << "Smallest number in the series is " << smllstN << endl;
    cout << "Largest  number in the series is " << largstN;
    

    //Exit stage right or left!
    return 0;
}