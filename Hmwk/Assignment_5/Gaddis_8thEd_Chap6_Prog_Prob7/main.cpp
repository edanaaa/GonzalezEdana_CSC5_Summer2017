/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 7:36 PM
 * Purpose: Celsius Temperature Table
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius (float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float cel=0.0f;//
    float fahre=0.0f;//Fahrenheit temperature 
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"This program displays Celsius temperature for 0 to 20 "<<endl;
    cout<<"Fahrenheit    Celsius "<<endl;
    //Output the transformed data
    for (int i=0;i<=20;i++)
    {
        cel=celsius(i);
        
        cout<<setw(5)<<i<<setw(15)<<setprecision(2)<<fixed
                <<showpoint<<cel<<endl;
    }
    //Exit stage right!
    return 0;
}

float celsius (float f)
{
    float c=0.0f;
    
    c=5*(f-32)/9;
    
    return c;
}