/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 6:34 PM
 * Purpose:  Currency
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVYNPD=98.93;
const float CNVERPD=0.74;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float amtUsdl;
    float amtYen;
    float amtEur;
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"This program converts U.S. dollars to Japanese yen and to euros"<<endl;
    cout<<"Input the amount of U.S. dollars: "<<endl;
    cin>>amtUsdl;
    
    //Input data
    amtYen=amtUsdl*CNVYNPD;
    amtEur=amtUsdl*CNVERPD;
    
    //Output the transformed data
    cout<<"The Amount of dollars in Japanese yen is: "<<amtYen<<endl;
    cout<<"The Amount of dollars in euros is: "<<amtEur<<endl;
    
    //Exit stage right!
    return 0;
}

