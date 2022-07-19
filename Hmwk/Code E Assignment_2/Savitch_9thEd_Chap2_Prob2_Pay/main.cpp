/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:11 PM
 * Purpose: Calculating New Compensation
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
    float payIncs = .076, //Pay increase, 7.6 percent times 100
          nwSalry, //New salary
          rtrPy, //Retroactive Pay
          odSalry, //Old salary
          mntSalry; //New monthly salary
    int month = 12;
    
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary." << endl;
    cin >> odSalry;
    
    //Map inputs -> outputs
    nwSalry = odSalry + odSalry * payIncs; //Calculating new salary
    rtrPy = (nwSalry - odSalry) / 2; //Retropay, new salary - old salary, divided by two
    mntSalry = nwSalry / month; //Calculating new mnthly salary, new salary divided by 12 months
    
    //Display the outputs
    cout << fixed << setprecision(2); //Formatted output
    cout << "Retroactive pay    = $" << setw(7) << rtrPy << endl;
    cout << "New annual salary  = $" << setw(4) << nwSalry << endl;
    cout << "New monthly salary = $" << setw(7) << mntSalry;

    //Exit stage right or left!
    return 0;
}

