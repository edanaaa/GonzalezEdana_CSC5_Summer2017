/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 12:13
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int CNVMPYR=12;//12 months per year
const int CNVPERC=100;//conversion to percent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float loanAmt, intRt, monPay;
    int numPer;//The number of compounding periods
    float totPay;
    float totInt;
    
   //Initialize Variables 
    loanAmt=1e4f; //Amount of loan is 10,000 dollars
    intRt=1.2e1f; //The percentage per year of the rate 12%
    numPer=36; //36 months of of the compounding period
     
    
    //Input data convert to percent / year to decimal / month
    intRt/=(CNVMPYR*CNVPERC);//1/12 for months and 1/100 for years 
    
    //Map inputs to outputs or process the data
    float temp=pow(1+intRt,numPer);//(1+r)^n
    monPay=intRt*temp*loanAmt/(temp-1);//(r*(1-r)*n)*L)/(1+r)*n-1)
    monPay=static_cast<int>(monPay*100)/100.0f;//Convert to pennies and back
    totPay=monPay*numPer;
    totInt=totPay-loanAmt;
           
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount = :               $"<<loanAmt<<endl;
    cout<<"Interest Rate = :              "<<setw(0)<<intRt*CNVPERC<<"%/ months"<<endl;
    cout<<"Number of Compounding Period = "<<setw(5)<<numPer<<" months"<<endl;
    cout<<"Monthly Payment = $            "<<setw(0)<<monPay<<endl;
    cout<<"Total Amount Pay = $           "<<totPay<<endl;
    cout<<"Total Interest Paid = $        "<<totInt<<endl;
 
    //Exit stage right!
    return 0;
}

