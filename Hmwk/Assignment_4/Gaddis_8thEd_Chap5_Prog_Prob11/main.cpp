/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 10, 2017, 7:39 PM
 * Purpose:  Population
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
    float strtPop=0.0f;//The Start of Population
    int numDays;// The number of Days
    float avgInc=0.0f;//The average increase
    float dailyPp=0.0f;//Daily population
   
    //Map inputs to outputs or process the data
    cout<<"Enter the starting number of organisms: "<<endl;
    cin>>strtPop;
    cout<<"Enter the average daily increase in population(in percentage): "<<endl;
    cin>>avgInc;
    cout<<"Enter the number of days the population multiples: "<<endl;
    cin>>numDays;
    
    //Output the transformed data
    while (strtPop<2)
    {
         cout<<"The starting population cannot be less than 2. Re-enter: "<<endl;
         cin>>strtPop;
    }
    while (avgInc<1)
    {
        cout<<"The average increase in population cannot be negative. Re-enter: "<<endl;
        cin>>avgInc;
    }
    while (numDays<1)
    {
        cout<<"The number of days cannot be less than 1. Re-enter: "<<endl;
        cin>>numDays;
    }
    
    for(int i=1;i<=numDays;i++)
    {
        //calculate increase
        dailyPp=((avgInc/100)*strtPop)+strtPop;
        //output
        cout<<"Population for day "<<i<<"is "<<dailyPp<<endl;
        
        strtPop=dailyPp;
    }
    
    
    //Exit stage right!
    return 0;
}

