/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 28, 2017, 7:58 PM
 * Purpose:  Magic Dates
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
    float monDt;//The month date in numeric form
    float day;//The day
    float year;//The two digits of the year
    float monDay;//The month and the day
    
    //Initialize variables
    //Map inputs to outputs or process the data
    cout<<"This program determines if the data is magic "<<endl;
    cout<<"Enter a month (in numeric form): "<<endl;
    cin>>monDt;
    cout<<"Enter a day: "<<endl;
    cin>>day;
    cout<<"Enter a two-digit year: "<<endl;
    cin>>year;
    
    //Input data
    monDay=monDt*day;//To find what the value of the month and the day is 
    
            
    //Output the transformed data
    if (monDay==year){
        cout<<"The date is magic"<<endl;
    }else if (monDay!=year) {
        cout<<"The date is not magic"<<endl;
    }
    cout<<"The month times the day = "<<monDay<<endl;
    
    
    
    //Exit stage right!
    return 0;
}

