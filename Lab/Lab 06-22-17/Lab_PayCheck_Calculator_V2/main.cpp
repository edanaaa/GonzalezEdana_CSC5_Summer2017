/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 22, 2017, 1:35 PM
 * Purpose:  Paycheck Calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float payRt;//The Rate worked
    float hours;//The hours worked
    float strtPay;//The amount of the PayCheck
    float ovrTime;//Where overtime starts in hours 
    float ovrFact;//Overtime Factor
    float ovrPay;//Overtime Pay
    float totPay;//Total Pay
    
    //Initialize Variable
    payRt=10.50f;
    hours=45.0f;
    ovrTime=40.0f;//Full Time = 40 hours
    ovrFact=1.5f;//Time and a half
    
   
    //Map inputs to outputs or process the data
     strtPay=hours*payRt;//Straight Time
     ovrPay=(hours>=ovrTime?(hours-ovrTime)*payRt*(ovrFact-1):0);
     totPay=strtPay+ovrPay;
             
    //Output the transformed data
    cout<<"Straight time pay = $ "<<strtPay<<endl;
    cout<<"Over time pay = $ "<<ovrPay<<endl;
    cout<<"The total paycheck = $ "<<totPay<<endl;
    
    //Exit stage right!
    return 0;
}

