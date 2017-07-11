/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 10, 2017, 8:27 PM
 * Purpose:  Average Rainfall
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   // Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MONTH=12;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int   numYrs=0;     //Number of years
    float totRfll=0.0f; //Total Rainfall
    float rainfall=0.0f;//Rainfall
    float avgRfall=0.0f;//The average rainfall
    
    //Input data
    cout<<"Enter number of years: "<<endl;
    cin>>numYrs;
    
    //Output the transformed data
    while (numYrs<1)
    {
        cout<<"Number of years must be at least 1. Re-enter "<<endl;
        cin>>numYrs;
    }
    for (int i=1;i<=numYrs;i++)
    {
        for(int months=1;months<=MONTH;months++)
        {
            cout<<"Enter the rainfall for "<<months<<" month:"<<endl;
            cin>>rainfall;
            
            while (rainfall<0)
            {
                cout<<"The rainfall cannot be negative number. Re-enter: "<<endl;
                cin>>rainfall;
            }
            totRfll+=rainfall;
        }
    }
    
    cout<<"Number of months: "<<numYrs*MONTH<<endl;
    cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totRfll<<"inches."<<endl;
    cout<<"Average rainfall: "<<setprecision(2)<<fixed<<totRfll/(numYrs*MONTH)<<" inches"<<endl;
    
    //Exit stage right!
    return 0;
}

