/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 9:00 PM
 * Purpose: ISP
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
      
	char choice; //Users choice
	int hours; //Amount of hours
	float cost, //Cost of service
	      bill; //Total cost
	
    
    //Initialize or input i.e. set variable values
        cin >> choice >> hours;
   
    
    //Map inputs -> outputs
    
    
    //Display the outputs
   cout << "ISP Bill" << endl;
   cout << "Input Package and Hours" << endl;
   
    if (hours > 744)
		cout << "Error! hours used in a month cannot exceed 744.";
	else if (choice == 'a' || choice == 'b' || choice == 'c' ||
		     choice == 'A' || choice == 'B' || choice == 'C')
		     
    switch (choice) // Calculate cost of monthly bill and additional hours.
		{	       
			case 'a' : //Package A
			case 'A' : if (hours <= 10)
						  cost = 9.95;
					   else
					 	  cost = 9.95 + ((hours - 10) * 2); //additional hours
					 	  bill += cost;
					   break;
			case 'b' : //Package B
			case 'B' : if (hours <= 20)
						  cost = 14.95;
					   else
					 	  cost = 14.95 + ((hours - 20) * 1); //additional hours
					 	  bill += cost;
					   break;
			case 'c' : //Package C
			case 'C' : cost = 19.95;
			           bill += cost;
					  
		}
        cout << "Bill = $ " << bill;
  

    //Exit stage right or left!
    return 0;
}
