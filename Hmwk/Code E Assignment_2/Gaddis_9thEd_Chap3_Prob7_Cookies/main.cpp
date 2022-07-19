/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 6, 2022, 6:59 PM
 * Purpose: Calories Consumed based on Cookies eaten
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
    const int COOKIES_PER_BAG = 40, //40 calories per bag of cookies
              CALORIES_PER_SERVING = 300, //Each servings, 4 cookies, has 300 calories
              SERVINGS = 10; //10 servings in a bag
              
          float cnsmdCalrs, //Consumed calories
                cooksprSrvg, //Cookies per serving
                srvgsEatn, //Number of servings eaten
                eatn; //Number of cookies eaten
    
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> eatn;
    
    
    //Map inputs -> outputs
    cooksprSrvg = COOKIES_PER_BAG / SERVINGS; //Formula to calculate how many cookies per serving
    srvgsEatn = eatn / cooksprSrvg; //Formula to calculate the amount of servings eatem
    cnsmdCalrs = srvgsEatn * CALORIES_PER_SERVING; //Formula to calculate consumed calories
    
    //Display the outputs
    
    cout << "You consumed " << cnsmdCalrs << " calories.";
    

    //Exit stage right or left!
    return 0;
}