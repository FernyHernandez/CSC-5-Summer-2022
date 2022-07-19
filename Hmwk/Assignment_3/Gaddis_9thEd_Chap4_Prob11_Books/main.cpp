/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 7:20 PM
 * Purpose: Books
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
    int nmBooks;
    
    //Initialize or input i.e. set variable values
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> nmBooks;
    cout << "Books purchased =  " << nmBooks << endl;
    
    
    //Map inputs -> outputs
     if (nmBooks == 0) 
        cout << "Point earned    =  0";
    else if (nmBooks == 1)
        cout << "Points earned   =  5";
    else if (nmBooks == 2)
        cout << "Points earned   = 15";
    else if (nmBooks == 3)
        cout << "Points earned   = 30";
    else if (nmBooks >= 4)
        cout << "Points earned   = 60";
    else
        cout << "That's an invalid number of books";
    
    
    //Display the outputs
  

    //Exit stage right or left!
    return 0;
}
