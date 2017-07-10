/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 22, 2017, 4:24 PM
 * Purpose: Total Purchase
 */
//System Libraries
#include <iostream>   //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries 

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here !

int main(int argc, char** argv) 
{
    //Declare Variables
    float mChrg=88.67f;//88.67 dollars for a patron meal charge
    float percTax;//6.75 percentage tax of the meal cost   
    float percTip;//20 percentage of the total cost meal plus tax
    float totAmt;//total amount of meal
    float tax;//total tax
    float tip;//total tip
    
    
    
   //Input Data Value
    mChrg=88.67;
    percTax=0.0675;
    percTip=0.20;
    
    
   //process the input
    tax=(percTax*mChrg);
    tip=(tax+mChrg)*percTip;
    totAmt=mChrg+tax+tip;
    
    
   //output results
    cout<<"The meal charge is: $"<<mChrg<<endl;
    cout<<"The tax amount is: $"<<tax<<endl;
    cout<<"The tip amount is: $"<<tip<<endl;
    cout<<"The total amount is: $"<<totAmt<<endl;
   
           
   //exit stage right

    return 0;
}