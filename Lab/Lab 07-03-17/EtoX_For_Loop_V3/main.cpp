/* 
 * File:   main.cpp
 * Author: Edana Gonzalez 
 * Created on July 3, 2017, 12:39 PM
 * Purpose: E to the X term by term
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>  //
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float aprxEx,exactEx,x, term,tol;
    char counter;
    
    //Initialize variables
    x=1;
    exactEx=exp(x);
    aprxEx=1;
    
    //Calculate the terms in the series
    for(float counter=1,term=1,tol=1e-6f;//Initialization - Start
              term>tol;                    //Test - Stop
              term*=x/counter,aprxEx+=term,counter++);//Update - Step
        
    //Output the terms in the table
    cout<<"Exact e^x= "<<exactEx<<endl;
    cout<<"Approx e^x= "<<aprxEx<<endl;
    
    //Exit stage right!
    return 0;
}

