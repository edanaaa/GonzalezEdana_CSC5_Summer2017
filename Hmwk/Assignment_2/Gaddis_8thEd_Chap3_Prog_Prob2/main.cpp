/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 26, 2017, 7:37 PM
 * Purpose:  Stadium Seating
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float classA=15.00f; // The cost of class A in dollars
    float classB=12.00f; //The cost of Class B in dollars
    float classC=9.00f;  //The cost of class C in dollars
    float amSolda;       //The number of seats sold in class A
    float amSoldb;       //The number of seats sold in classB
    float amSoldc;       //The number of seats sold in classC
    float amtA;          //The amount sold in classA
    float amtB;          //The amount sold in classB
    float amtC;          //The amount sold in classC
    float totAmt;        //The total amount of seats sold

            
    //Input data
   
    //Map inputs to outputs or process the data
    cout<<"Enter the Amount of seats sold in class A"<<endl;
    cin>>amSolda;
    
    cout<<"Enter the amount of seats sold in class B"<<endl;
    cin>>amSoldb;
     
    cout<<"Enter the amount of seats sold in class C"<<endl;
    cin>>amSoldc;
    
    //Initialize variables
    amtA=classA*(amSolda);
    amtB=classB*amSoldb;
    amtC=classC*amSoldc;
    totAmt=amtA+amtB+amtC;
    
    //Output the transformed data
    cout<<"The total amount of money collected is: $ "<<setprecision(5)<<totAmt<<endl;
    
    
    //Exit stage right!
    return 0;
}

