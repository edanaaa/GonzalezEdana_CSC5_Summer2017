/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 9:00 PM
 * Purpose: Present Value 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float preVal (float,float,int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float presVal=0;//amount that you need to deposit today
    float futVal=10000;//future value that you want in the account
    float rate=0;//Annual interest rate
    int numYrs=0;//the number of years that you plan to let the money sit in the account
   
    
    //Map inputs to outputs or process the data
    cout<<"Enter the future value that you want in the account."<<endl;
    cin>>futVal;
    cout<<"Enter the annual interest rate."<<endl;
    cin>>rate;
    cout<<"Enter number of years that you plan to let the money sit in the account"<<endl;
    cin>>numYrs;
    
    //Output the transformed data
    presVal=preVal(futVal,rate,numYrs);
    cout<<"In order to save "<<futVal<<" you need to deposit: $"<<presVal<<endl;
    
    //Exit stage right!
    return 0;
}

float preVal (float f,float r,int n)
{
    float p;
    
    p=f/(pow ((1+(r*0.01)),n));
    
    return p;
            
}