/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 7:07 PM
 * Purpose:  Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kEnrgy (int , int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mass=0;//Mass in kilograms
    float velocty=0;//Velocity in meters per second
    float kE=0;//Kinetic Energy
    
    //Map inputs to outputs or process the data
    cout<<"Enter the mass of an object (kilograms): "<<endl;
    cin>>mass;
    cout<<"Enter velocity of the object (meters per sec); "<<endl;
    cin>>velocty;
    
    //Output the transformed data
    kE=kEnrgy(mass,velocty);
    cout<<"The Kinetic Energy of the object is: "<<kE<<" Joules"<<endl;
    
    //Exit stage right!
    return 0;
}

float kEnrgy (int m,int v)
{
    
    return m*(pow(v,2))/2;
    
    
}