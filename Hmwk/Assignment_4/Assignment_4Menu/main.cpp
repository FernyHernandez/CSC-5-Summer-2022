/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 14, 2022, 7:11 PM
 * Purpose: Menu
 *           
 */

///System Libraries
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1: Sum"<<endl;
        cout<<"Type 1 for Problem 2: Pay in Pennies"<<endl;
        cout<<"Type 2 for Problem 3: MinMax" <<endl;
        cout<<"Type 3 for Problem 4: Rectangle"<<endl;
        cout<<"Type 4 for Problem 5: Pattern"<<endl;
        cout<<"Type 5 for Problem 6: MPG"<<endl;
        cout<<"Type 6 for Problem 7: Fuel Efficiency"<<endl;
        cout<<"Type 7 for Problem 8: Inflation"<<endl;
        cout<<"Type 8 for Problem 9: Estimated Cost"<<endl;
        cout<<"Type 9 for Problem 10: 2 or 3 Max"<<endl;
        cin>>choice;
        
         switch(choice){
            case '0':{
                
            int num, //User input
                sum = 0; //Sum accumulator
      
        
         do { //Ask for user input unless number is less than 0
             cin >> num;
        }while (num < 0);
    
          for(int i = 1; i <= num; i++)
            sum += i; 
            cout << "Sum = " << sum;
                
                
                break;
            }
            case '1':{
              const int INCREMENT = 2;
                    int days;
              float sum = 0,
                    pay = .01;
    
 
   if (days < 1)
   {
       cout << "No number less than 1 accepted.";
       cout << "Please try again:";
       cin >> days;
       
   }else if(days >= 1)
        cin >> days;
   
   for(int i = 1; i <= days; i++)
   {
       
       sum += (pay*100) / 100;
       pay *= INCREMENT;
    
   }
 
   cout << "Pay = $" << sum;
  
               break;
            }
            case '2':{
                int num,     //User input
                    smllstN = 10000, //Smallest number
                    largstN = 0; //Largest number
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
         while (num != -99) //Execute as long as user input does not equal -99
         {
           cin >> num;
      if(num == -99) //If user input is -99 stop the loop
            break;
    if (num > largstN)
     largstN = num;
    if (num < smllstN)
     smllstN = num;
  }
 
    //Display the outputs
    cout << "Smallest number in the series is " << smllstN << endl;
    cout << "Largest  number in the series is " << largstN;
    
                break;
            }
            
            case '3':{
                char ltter; //X/Y for output
                  int num, //User input
                      rwN, //Row
                    clmnN; //Column
    
    //Initialize or input i.e. set variable values
    cin >> num >> ltter;
    
    //Map inputs -> outputs
    while (num > 15 || num < 1) //Input validation
    {
        cout << "Only numbers less than 15 and greater than 0 are accepted.";
        cin >> num  >> ltter;
    }
    for (clmnN = 1; clmnN < num; clmnN++) //Outer loop controls columns
    {
        for (rwN = 1; rwN <= num; rwN++) //Inner loop controls rows
        {
            cout << ltter;
        }
        cout << endl;
    }
    for (; clmnN == num; clmnN++)
    {
        for (rwN = 1; rwN <= num; rwN++)
        {
            cout << ltter;
        }
    }                
                break;
            }
             case '4':{
                  
            int size;
    
    
            cin >> size;
    
    
            for (int rows = 1; rows <= size; rows++)
    {   
            for (int cols = 1; cols <= rows; cols++)
        {
            cout << "+";
        }
            cout << endl << endl;
    }
    
            for (int rows = 1; rows <= size; rows++)
        {
                for(int cols = 1; cols <= size+1 - rows; cols++)
        {
            cout << "+";
        }
            if(rows < size)
            cout << endl << endl;
    }
    
                 break;
             }
             case '5':{
                 const float GALLON = 0.264179;
                 
                  float lters, //Liters
                        mles, //Miles
                        mpg, //MPG
                        gal; //Gallon
                   char inpt;
    
                    inpt = 'y';
    //Initialize or input i.e. set variable values
    while (inpt == 'y') //Will always be true unless user terminates loop
    {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lters;
        
        cout << endl << "Enter number of miles traveled:" << endl;
        cin >> mles;
        cout << endl << "miles per gallon:";
        gal = (lters * GALLON);
        mpg = mles / gal;
        
        cout << fixed << setprecision(2);
        cout << endl << mpg << endl;
        
        cout << "Again:" << endl;
        cin >> inpt;
        if(inpt == 'y')
            cout << endl;
    }
                 
                 break;
             }
             case '6': {
                  const float GALLON = 0.264179;
                  
                  float lters1, //Liters for car one
                         mles1, //Miles for car one
                         lters2, //Liters for car two
                        mles2, //Miles for car two
                        mpg1, //MPG for car one
                        mpg2, //MPG for car two
                        gal1, //Gallon one
                        gal2; //Gallon two
                char inpt; //User input
    
                inpt = 'y';
    //Initialize or input i.e. set variable values
    while (inpt == 'y') //Will always be true unless user terminates loop
    {
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:";
        cin >> lters1;
        
        cout << endl << "Enter number of miles traveled:" << endl;
        cin >> mles1;
        cout << "miles per gallon: ";
        gal1 = (lters1 * GALLON);
        mpg1 = mles1 / gal1;
        
        cout << fixed << setprecision(2);
        cout << mpg1 << endl << endl;
        
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lters2;
        cout << "Enter number of miles traveled:" << endl;
        cin >> mles2;
        cout << "miles per gallon: ";
        gal2 = (lters2 * GALLON);
        mpg2 = mles2 / gal2;
        
        cout << fixed << setprecision(2);
        cout << mpg2 << endl << endl;
        
        if (mpg1 > mpg2)
        {
            cout << "Car 1 is more fuel efficient" << endl << endl;
        }
        else
             cout << "Car 2 is more fuel efficient" << endl << endl;
         
        cout << "Again:" << endl;
        cin >> inpt;
        if(inpt == 'y')
            cout << endl;
    }

                 break;
             }
             case '7':{
                 const float PERCENT = 100; //Percent conversion
   
                float crntP, //Current price
                      yragP; //Year ago price
                char quit; //User input
    
                quit = 'y';
  
    
    //Display the outputs
do{
    cout << fixed << setprecision(2);
    cout << "Enter current price:" << endl;
    cin >> crntP;
    cout << "Enter year-ago price:" << endl;
    cin >> yragP;
    cout << "Inflation rate: " << ((crntP - yragP) / yragP) * PERCENT << "%" << endl; //Current price minus year ago price, divided by year ago price, times 100, in that order
    cout << endl;
    cout << "Again:";
    cout << endl;
    cin >> quit;
    if(quit == 'n') //If user types n loop ends
        break;
    cout << endl;
}while (quit == 'y');

                 break;
             }
             case '8': {
                 const int PERCENT = 100;
                 float inflRte, //Inflation rate
                        prceYr, //Price in one year
                        prceYr2, //Price in two year
                        crntP, //Current price
                        yragP; //Year ago price
                    char quit; //User input
    
                    quit = 'y';
    
do{
    cout << fixed << setprecision(2);
    cout << "Enter current price:" << endl;
    cin >> crntP;
    cout << "Enter year-ago price:" << endl;
    cin >> yragP;
    inflRte = ((crntP - yragP) / yragP) * PERCENT;
    cout << "Inflation rate: " << inflRte << "%" << endl; //Current price minus year ago price, divided by year ago price, times 100, in that order
    cout << endl;
    
   
    prceYr = (((inflRte / 100)* crntP)+ crntP);
    cout << "Price in one year: $" << prceYr << endl;
    
    prceYr2 = (((inflRte / 100)* prceYr) + prceYr);
    cout << "Price in two year: $" << prceYr2 << endl;
    
    cout << endl << "Again:";
    cout << endl;
    cin >> quit;
    if(quit == 'n') //If user types n loop ends
        break;
    cout << endl;
}while (quit == 'y');
                 
                 break;
             }
             case '9':{
                 float num1, //Number 1
                       num2, //Number 2 
                       num3; //Number 3
    
    //Initialize or input i.e. set variable values
    cin >> num1 >> num2 >> num3; //User input
    
    //Map inputs -> outputs
    cout << "Enter first number:" << endl;
    cout << endl << "Enter Second number:" << endl;
    cout << endl << "Enter third number:" << endl << endl;
    
    cout << "Largest number from two parameter function:\n";
    if(num1 > num2) //If number 1 is greater than number 2, number 1 will be displayed
    {
        cout << num1;
        cout << endl;
    }
    else //If number 1 is not greater than number 2, number 2 will be displayed
    {
        cout << num2;
        cout << endl;
    }
    
    
    cout << endl;
    cout << "Largest number from three parameter function:\n";
    if(num1 > num2 && num1 > num3) //If number 1 is greater than number 2 and 3, number 1 will be displayed
    {
        cout << num1 << endl;
    }
    else if(num2 > num1 && num2 > num3) //If number 2 is greater than number 1 and 3, number 2 will be displayed
    {
        cout << num2 << endl;
    }
    else if(num3 > num1 && num3 > num2)  //Else if number 3 is greater than number 1 and number 2, number 3 will be shown
    {
        cout << num3 << endl;
    }
                 
                 break;
             }
        }
        
       
    }while(choice >= 0 && choice <= 9);
    

    return 0;
}