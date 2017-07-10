/* 
 * File:   main.cpp
 * Author: Edana Gonzalez 
 * Created on July 3, 2017, 12:17 PM
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
    counter=0;
    term=1;
    tol=1e-6f;
    
    //Output the terms in the table
    cout<<"Exact e^x= "<<exactEx<<endl;
    cout<<"Counter  Approx e^x  Difference"<<endl;
    cout<<fixed<<setprecision(0);
    cout<<setw(4)<<static_cast<int>(counter);
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<setw(15)<<aprxEx<<setw(12)<<exactEx-aprxEx<<endl;
    
    //Calculate the terms in the series
    do{
        counter+=1;
        term*=x/counter;
        aprxEx+=term;
    
        //Output the next term
        cout<<fixed<<setprecision(0);
        cout<<setw(4)<<static_cast<int>(counter);
        cout<<fixed<<setprecision(6)<<showpoint;
        cout<<setw(15)<<aprxEx<<setw(12)<<exactEx-aprxEx<<endl;
    }while (term>tol);
    
    
    //Exit stage right!
    return 0;
}

