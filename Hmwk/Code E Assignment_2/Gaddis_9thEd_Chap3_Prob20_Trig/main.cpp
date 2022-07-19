/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 7:06 PM
 * Purpose: Sine, Cosine, and Tangent of an angle
 */

//System Libraries
#include <iomanip>
#include <cmath>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float pi = 3.14159265359f; //PI remains constant Globally

//Function Prototypes
float cnvrtRdn(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angl, //angle 
          anglsn, //anglesin
          anglcs, //anglecos
          angltn, //angletan
          sn, //sin
          cs, //cos
          tn; //tan
    
    //Initialize or input i.e. set variable values
     cout << "Calculate trig functions" << endl; //Asking user for input, degrees of angle
     cout << "Input the angle in degrees." << endl;
     cin >> angl;
    
    //Map inputs -> outputs
    anglsn = pi * angl / 180; //Calculatating degrees to radians
    anglcs = pi * angl / 180;
    angltn = pi * angl / 180;
    sn = sin(anglsn);
    cs = cos(anglcs);
    tn = tan(angltn);
    
    //Display the outputs
    
    cout << "sin(" << angl << ") = " << fixed << setprecision(4) << sn << endl; //Formatted Output
    cout << "cos(" << fixed << setprecision(0) << angl << ") = " << fixed << setprecision(4) << cs << endl;
    cout << "tan(" << fixed << setprecision(0) << angl << ") = " << fixed << setprecision(4) << tn;

    
    
   

    //Exit stage right or left!
    return 0;
}
