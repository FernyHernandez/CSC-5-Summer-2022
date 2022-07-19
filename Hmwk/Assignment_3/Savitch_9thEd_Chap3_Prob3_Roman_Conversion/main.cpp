/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 12, 2022, 9:30 PM
 * Purpose: Roman Numeral Conversion
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
    int ar, //Years in Arabic numerals
        n1000, //1000s
        n100, //100s
        n10, //10s
        n1, //1s
        ad1000, //Numeral without 1000s
        ad100, //Numeral without 100s
        ad10; //Numeral without 1s
    string r1000, //Roman 1000s
           r100, //Roman 100s
           r10, //Roman 10s
           r1; //Roman 1s
    
    
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> ar;
    
    
    //Display the outputs
        
    n1 = (ar) % 10;
    ad10 = ar - n1;
    n10 = (ad10 / 10) % 10;
    ad100 = ad10 - (n10 * 10);
    n100 = (ad100 / 100) % 10;
    ad1000 = ad100 - (n100 * 100);
    n1000 = (ad1000 / 1000) % 10;
    
    if (ar >= 1000 && ar <= 3000)
    {
        {
            if(n1000 == 1)
                r1000 = "M"; //1000 = 'M'
            else if(n1000 == 2)
                r1000 = "MM"; 
        }
        {
            if (n100 == 9)
                r100 = "CM";
            else if(n100 == 8)
                r100 = "DCCC";
            else if(n100 == 7)
                r100 = "DCC";
            else if(n100 == 6)
                r100 = "DC";
            else if(n100 == 5)
                r100 = "D";
            else if(n100 == 4)
                r100 = "CD";
            else if(n100 == 3)
                r100 = "CCC";
            else if(n100 == 2)
                r100 = "CC";
            else if(n100 == 1)
                r100 = "C";
        }
        {
            if(n10 == 9)
               r10 = "XC";
            else if(n10 == 8)
                r10 = "LXXX";
            else if(n10 == 7)
                r10 = "LXX";
            else if(n10 == 6)
                r10 = "LX";
            else if(n10 == 5)
                r10 = "L";
            else if(n10 == 4)
                r10 = "XL";
            else if(n10 == 3)
                r10 = "XXX";
            else if(n10 == 2)
                r10 = "XX";
            else if(n10 == 1)
                r10 = "X";
        }
        {
            if(n1 == 9)
               r1 = "IX";
            else if(n1 == 8)
                r1 = "VIII";
            else if(n1 == 7)
                r1 = "VII";
            else if(n1 == 6)
                r1 = "VI";
            else if(n1 == 5)
                r1 = "V";
            else if(n1 == 4)
                r1 = "IV";
            else if(n1 == 3)
                r1 = "III";
            else if(n1 == 2)
                r1 = "II";
            else if(n1 == 1)
                r1 = "I";
        }
        cout << ar << " is equal to " << r1000 + r100 + r10 + r1;
    }
    else
    cout << ar << " is Out of Range!";
  

    //Exit stage right or left!
    return 0;
}
