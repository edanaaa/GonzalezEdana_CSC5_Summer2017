/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 30, 2017, 4:57PM
 * Purpose:  Body Mass Index
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>    //
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVNUM=703;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float weight;//The weight in pounds
    float height;//The height in inches
    float bmi;//The Body Mass Index
    
    //Map inputs to outputs or process the data
    cout<<"This program calculates a person's body mass index"<<endl;
    cout<<"Enter your weight (in lbs): "<<endl;
    cin>>weight;
    cout<<"Enter your height (in inches): "<<endl;
    cin>>height;
    
    //Input data
    bmi=(weight*CNVNUM)/pow(height,2);
    
    //Output the transformed data
    cout<<"Your body mass index is: "<<bmi<<" lbs/in^2"<<endl;
    
    if (bmi>=18.5 && bmi<=25)
        cout<<"You have an optimal weight"<<endl;
    else if (bmi<18.5)
        cout<<"You are underweight"<<endl;
    else 
        cout<<"You are overweight"<<endl;
    
    //Exit stage right!
    return 0;
}

