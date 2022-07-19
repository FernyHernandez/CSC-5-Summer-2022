/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 8:30 PM
 * Purpose: Race
 *          
 */

//System Libraries
#include <string>
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
     string runner1, //First runner
             runner2, //Second runner
             runner3; //Third runner

      int time1, //Time 1
          time2, //Time 2 
          time3; //Time 3
    
    
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
    cin >> runner1 >> time1; //Input for runner 1
    cin >> runner2 >> time2; //Input for runner 2
    cin >> runner3 >> time3; //Input for runner 3
    
    
    if (time1 < time2 && time1 < time3){ //If time 1 is less time 2 and time 3
    cout << "" << runner1 << "\t" << setw(3) << time1 << endl;
    
    if (time2 < time3) //If time 2 is less than time 3
    {
        cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
        cout << "" << runner3 << "\t" << setw(3) << time3;
    }
    else if(time3 < time2) //if time 3 is less than time 2
    {
        cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
        cout << "" << runner2 << "\t" << setw(3) << time2;
    }
}
else if(time2 < time1 && time2 < time3) //else If time 2 is less than time 1 and time 2 is less than time 3
{
    cout << "" << runner2 << "\t" << time2 << setw(3) << endl;
    
    if(time1 < time3) //If time 1 is less than time 3
    {
        cout << "" << runner1 << "\t" << setw(3) << time1 << endl;
    }
    else if(time3 < time1) //If time 3 is less than time 1
    {
        cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
        cout << "" << runner2 << "\t" << setw(3) << time2;
    }
}
else if(time3 < time2 && time3 < time1) //else if time 3 is less than time 2 and time 1
{
    cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
    
    if(time2 < time1) //if time 2 is less than time 1
    {
        cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
        cout << "" << runner1 << "\t" << setw(3) << time1;
    }
    else if(time1 < time2) //else if time 1 is less than time 2
    {
        cout << "" << runner1 << "\t" << setw(3) << time1 << endl;
        cout << "" << runner2 << "\t" << setw(3) << time2;
        
    }
}

  

    //Exit stage right or left!
    return 0;
}
