/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 30, 2017, 4:11 PM
 * Purpose:  Mass and Weight
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVGRAV=9.8;//g equals 9.8 m/s^2

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mass;//The object's mass
    float weight;//The weight of the object
   
    //Map inputs to outputs or process the data
    cout<<"This program calculates weight"<<endl;
    cout<<"Enter an object's mass: "<<endl;
    cin>>mass;
    
    //Input data
    weight=mass*CNVGRAV;
    
    //Output the transformed data
    cout<<"The object's weight is: "<<weight<<" Newtons"<<endl;
    
    if (weight>1000)
        cout<<"The object is too heavy"<<endl;
    else if (weight<10)
        cout<<"The object is too light"<<endl;
    else
        cout<<" "<<endl;
    
    
    //Exit stage right!
    return 0;
}

