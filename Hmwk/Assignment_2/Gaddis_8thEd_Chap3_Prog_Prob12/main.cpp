/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 1:29 PM
 * Purpose:   Celsius to Fahrenheit
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
    float cel;
    float fah;
    
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"This program converts Fahrenheit to Celsius"<<endl;
    cout<<"Input Degree in Celsius: "<<endl;
    cin>>cel;
    
    //Input data
    fah=((9.0f*cel)/5.0f)+32.0f;
    //Output the transformed data
    cout<<"Celsius to Fahrenheit is: "<<fah<<" Degrees"<<endl;
    
    //Exit stage right!
    return 0;
}

