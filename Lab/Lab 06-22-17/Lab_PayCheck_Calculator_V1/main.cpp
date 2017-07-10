/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 22, 2017, 12:39 PM
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
    float hours;//The Hours worked
    float payChk;//The Amount of the PayCheck
    
    
    //Input data
    cout<<"Enter the hours you worked? ";
    cin>>hours;
    cout<<"Enter your PayRate : ";
    cin>>payRt;
    
    
    //Map inputs to outputs or process the data
     payChk=hours*payRt;
     
    //Output the transformed data
    cout<<"Your paycheck total is: $ "<<payChk<<endl;
    
    //Exit stage right!
    return 0;
}

