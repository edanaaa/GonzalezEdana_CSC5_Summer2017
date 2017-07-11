/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 9, 2017, 3:47 PM
 * Purpose: Sum of Numbers
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
    int sum=0,posInt,num=0;
    
    //Map inputs to outputs or process the data
    cout<<"This program calculates the sum of numbers inputed"<<endl;
    cout<<"Enter a positive integer"<<endl;
    cin>>num;
    
    //Output the transformed data
    while (num<0)
    {
        cout<<"Please enter a positive value"<<endl;
        cin>>num;
        
    }
            
    for (int posInt=1;posInt<=num;posInt++)
    {
        sum+=posInt;
    }
    cout<<"Total sum is: "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

