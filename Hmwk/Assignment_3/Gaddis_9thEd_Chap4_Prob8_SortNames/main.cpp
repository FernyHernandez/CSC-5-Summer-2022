/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 7:11 PM
 * Purpose: Sort Names
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
    string nm1, //String Variables
           nm2, 
           nm3;
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> nm1 >> nm2 >> nm3; //user input
   
    
    //Map inputs -> outputs
     if (nm1 < nm2 && nm1 < nm3) //If nm1 is first
    {
        cout << nm1 << endl;
        if (nm2 < nm3)
        {
            cout << nm2 << endl << nm3;
        }
        else
        {
            cout << nm3 << endl << nm2;
        }
    }
    else if (nm2 < nm1 && nm2 < nm3) //if nm2 is first
    {
        cout << nm2 << endl;
        if (nm1 < nm3)
        {
            cout << nm1 << endl << nm3;
        }
        else 
        {
            cout << nm3 << endl << nm1;
        }
    }
    else if (nm3 < nm1 && nm3 < nm2) //if nm3 is first
    {
        cout << nm3 << endl;
        if (nm1 < nm2)
        {
            cout << nm1 << endl << nm2;
        }
        else
        {
            cout << nm2 << endl << nm1;
        }
    }
    
    
    //Display the outputs
  

    //Exit stage right or left!
    return 0;
}
