/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 10:02 PM
 * Purpose: Future Value 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float futVal (float,float,int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float presVal=0;//present value of account
    float fVal=0;//future value after the specified time period
    float rate=0;//monthly interest rate
    int numMon=0;//the number of months
   
    
    //Map inputs to outputs or process the data
    cout<<"Enter the account’s present value."<<endl;
    cin>>presVal;
    cout<<"Enter the monthly interest rate."<<endl;
    cin>>rate;
    cout<<"Enter the number of months that the money will be left in the account."<<endl;
    cin>>numMon;
    
    //Output the transformed data
    fVal=futVal(presVal,rate,numMon);
    cout<<"The account’s future value is: $"<<fVal<<endl;
    
    //Exit stage right!
    return 0;
}

float futVal (float p,float i,int n)
{
    float f;
    
    f=p*(pow ((1+(i*0.01)),n));
    
    return f;
            
}