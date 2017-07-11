/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 9, 2017, 3:18 PM
 * Purpose:  Membership Fee Increase
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float yrs;//Years
    float memShip=2500;//The current charge of membership is $2,500 per year
    float memFee=0.04;//Increase of 4% in membership
    
    
    //Purpose of this program output
    cout<<"This program calculates the Membership Fee Increase in a country club"<<endl;
    
    //Output the transformed data
    
    for (yrs=1;yrs<=6;yrs++)
    {
        
        memShip=memShip+(memShip*memFee);
        
        cout<<"Years "<<yrs<<" fees are: $"<<memShip<<endl;
    }
        
           
    //Exit stage right!
    return 0;
}

