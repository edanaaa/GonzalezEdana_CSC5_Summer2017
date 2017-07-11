/* 
 * File:   main.cpp
 * Author: Edana Gonzalez 
 * Created on July 10, 2017, 1:05 PM
 * Purpose:  Pennies for pay
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pennies=1; //The amount of salary in pennies
    float totPay=0;  //The total amount of pay at the end of the period in pennies
    int   numDay;    //The number of days the user has worked
    int   days;      //The number of days
    
    //Input data
    cout<<"This program calculate how much a person would earn over a period of time if payed in pennies "<<endl;
    cout<<"Input the number of days worked: "<<endl;
    cin>>numDay;
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    
    for(days=1;days<=numDay;days++){
        totPay +=pennies;
        pennies += pennies; 
        cout<<"In "<<days<<" day(s) you have earned "<<totPay<<" in pennies"<<endl;
    }
    cout<<"The total amount of pay at the end of "
        <<numDay<<" day(s)in dollars is: $ "<<totPay/100<<endl;
        
        
    //Exit stage right!
    return 0;
}

