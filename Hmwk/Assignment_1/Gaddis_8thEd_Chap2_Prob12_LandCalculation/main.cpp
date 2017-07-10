/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 21, 2017, 1:27 PM
 * Purpose:  Land Calculation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVFTAC=43560.0f;//43560 feet/Acre
const float CNVFTM=5280.0f;//5280 feet/Mile

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float inSqFt,inAcres;//Input Square Feet and Acres
    float nAcres,nSqMls;//Output
    
    //Initialize variables
    
    //Input data
    cout<<"Input number of Square feet,and Acres to convert "<<endl;
    cin>>inSqFt>>inAcres;
    
    //Map inputs to outputs or process the data
    nAcres=inSqFt/CNVFTAC;
    nSqMls=inAcres*CNVFTAC/CNVFTM/CNVFTM;
    
    
    //Output the transformed data
    cout<<inSqFt<<"feet = "<<nAcres<<" Acres "<<endl;
    cout<<inAcres<<"Acres = "<<nSqMls<<" Miles "<<endl;
    
    //Exit stage right!
    return 0;
}

