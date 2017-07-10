/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 26, 2017, 8:54 PM
 * Purpose:  Average Rainfall
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Input - Output
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1;//Month 1
    float amtMot1;//The amount of rainfall in month 1
    string month2;//Month 2
    float amtMot2;//The amount of rainfall in month2
    string month3;//Month 3
    float amtMot3;//The amount of rainfall in month 3
    float avgRfal;//The average of the rainfall in inches 
    
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"Please enter the name of a month "<<endl;
    cin>>month1;
    cout<<"Please enter the amount of rainfall in that month"<<endl;
    cin>>amtMot1;
    cout<<"Please enter the name of a month "<<endl;
    cin>>month2;
    cout<<"Please enter the amount of rainfall in that month"<<endl;
    cin>>amtMot2;
    cout<<"Please enter the name of a month "<<endl;
    cin>>month3;
    cout<<"Please enter the amount of rainfall in that month"<<endl;
    cin>>amtMot3;
            
    
    //Input data
    avgRfal=(amtMot1+amtMot2+amtMot3)/3;
    
    //Output the transformed data
    cout<<"The average rainfall for: "<<month1<<"," <<month2<<",and " <<month3<<" is: " <<avgRfal<<endl;
    
    //Exit stage right!
    return 0;
}

