/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 1.29 PM
 * Purpose:  Fahrenheit to Celsius
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
    float fah;
    float cel;
    float fah2;
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"This program converts Fahrenheit to Celsius"<<endl;
    cout<<"Input Degree in Fahrenheit: "<<endl;
    cin>>fah;
    
    //Input data
    cel=(5.0f*(fah-32.0f))/9.0f;
    fah2=((9.0f*cel)/5.0f)+32.0f;
    //Output the transformed data
    cout<<"Fahrenheit to Celsius is: "<<cel<<endl;
    cout<<"Celsius back to Fahrenheit: "<<fah2<<endl;
    
    //Exit stage right!
    return 0;
}

