/* 
 * File:   main.cpp
 * Author: Ferny Hernandez
 * Created on July 7, 2022, 10:00 PM
 * Purpose: Gas Tax
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
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables
    float EXC_TAX  = .39, //Excise tax/gallon
          SALS_TAX = .08, //Sales Tax
          CAP_TRDE = .10, //Cap and Trade fee
          FDRL_EXC = .184, //Federal excise tax
          OIL_CP   = .065; //Oil company profit
    float pProf, //Profit from oil companies as a percent
          taxWs, //Tax on gas before sales tax, EXC + CAP + FEDERAL
          tlTxs, //Total taxes, Dollar amount
          pTaxg, //Percent taxes to the government
          olCPD, //Dollar amount of profit from oil companies
          gasPrce; //Input from user, price per gallon
    //Initialize or input i.e. set variable values
     cout << "How much did it cost you per gallon the last time you ";
     cout << "put gas in your car?" << endl;
     cin >> gasPrce;
    
    //Map inputs -> outputs
     taxWs = gasPrce - EXC_TAX - CAP_TRDE - FDRL_EXC; //Calculating Tax on gas before sales tax
     SALS_TAX *= taxWs; //Now calculating tax on gas before sales tax * 8% SALES tax
     taxWs -= SALS_TAX; //Subtracting SALES Tax from taxWs
     olCPD = taxWs * OIL_CP; //Profit from oil companies
     tlTxs = SALS_TAX + EXC_TAX + CAP_TRDE + FDRL_EXC; //All govt taxes added together
     pTaxg = (tlTxs / gasPrce) * 100; //Calculating taxes to govt as a percent
     pProf = (olCPD / gasPrce) * 100; //Calculating oil company profit as a percent
    
    //Display the outputs
     cout << fixed << setprecision(2); //Formatted output
     cout << "Total taxes to the government on this gallon of gas are";
     cout << setw(7) << ":$" << tlTxs << " \n";
     cout << "Total profit oil companies made on this gallon of gas are";
     cout << setw(5) << ":$" << olCPD << endl;
     cout << "Total taxes to the government on this gallon as a percent";
     cout << setw(4) << ":" << pTaxg << "%" << endl;;
     cout << "Total profit oil companies made on this gallon as a percent : ";
     cout << pProf << "%";
  

    //Exit stage right or left!
    return 0;
}
