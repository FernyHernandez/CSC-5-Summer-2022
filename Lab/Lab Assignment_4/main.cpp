/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 10, 2022, 7:11 PM
 * Purpose: Truth Table
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
     bool x,y;
     
     
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
        <<"!(X||Y) !X||!Y !(X&&Y)"<<endl;
    
     //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"   ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<endl;
    
     //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"   ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<endl;
    
    //Third Row
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"   ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<endl;
    
    //Fourth row
    x=y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"   ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<(!(x||y)?'T':'F')<<"    ";
    cout<<(!x||!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"    ";
    cout<<endl;
    
    
    
    return 0;
}
