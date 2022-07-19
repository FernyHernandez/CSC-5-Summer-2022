/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 8:00 PM
 * Purpose: Bank Charges
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
    float stBal, //Starting balance
          montFee, //Monthly fee
          nwBal, //New standing balance
          chkFee, //fee
          lwBal; //Balance because of low fee
    int nChks; //Number of checks
    
    
    //Initialize or input i.e. set variable values
    cin >> stBal; //User input
    cin >> nChks;
    montFee = 10;
   
    
    //Map inputs -> outputs
      if (nChks < 20)
    chkFee = .10 * nChks; //If number is less than 20, 10 cents will be charged
 else if (nChks >= 20 && nChks < 40)
    chkFee = .08 * nChks; //If number is between 20 - 39, 8 cents will be charged
 else if (nChks >= 40 && nChks < 60)
    chkFee = .06 * nChks; //If number is between 40 - 59, 6 cents will be charged
    else {chkFee = .04 * nChks;
    }
    {
    if (stBal < 400)
        lwBal = 15;
 else lwBal = 0;
    }

    
    //Display the outputs
    nwBal = stBal - chkFee - montFee - lwBal;
    cout << fixed << setprecision(2);
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cout << "Balance     $" << setw(9) << right << stBal << endl;
    cout << "Check Fee   $" << setw(9) << right << chkFee << endl;
    cout << "Monthly Fee $" << setw(9) << right << montFee << endl;
    cout << "Low Balance $" << setw(9) << right << lwBal << endl;
    cout << "New Balance $" << setw(9) << right << nwBal;

  

    //Exit stage right or left!
    return 0;
}
