/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 26, 2017, 7:54 PM
 * Purpose:  Test Average
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Input - Output 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float testSc1;// Test Score 1 must be a number, not a percent value
    float testSc2;//Test Score 2 must be a number, not a percent value
    float testSc3;// Test Score 3 must be a number, not a percent value
    float testSc4;// Test Score 4 must be a number, not a percent value
    float testSc5;// Test Score 5 must be a number, not a percent value
    float avgSc;//The Average test Scores 

    //Input data
   
    //Map inputs to outputs or process the data
    cout<<"Enter test score 1 (not percent value): "<<endl;
    cin>>testSc1;
    cout<<"Enter test score 2 (not percent value): "<<endl;
    cin>>testSc2;
    cout<<"Enter test score 3 (not percent value): "<<endl;
    cin>>testSc3;
    cout<<"Enter Test score 4 (not percent value): "<<endl;
    cin>>testSc4;
    cout<<"Enter Test score 5 (not percent value): "<<endl;
    cin>>testSc5;
    
    //Initialize variables
    avgSc=(testSc1+testSc2+testSc3+testSc4+testSc5)/5;
    
    //Output the transformed data
    cout<<"This is the average of the five test scores: "<<setprecision(2)<<avgSc<<endl;
    
    
    //Exit stage right!
    return 0;
}

