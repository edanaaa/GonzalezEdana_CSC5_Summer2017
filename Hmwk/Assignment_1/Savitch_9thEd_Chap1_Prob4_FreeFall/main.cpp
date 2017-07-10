/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 20, 2017, 12:25 PM
 * Purpose: Homework Free Fall Problem 
 */

//System Libraries Here
#include <iostream> //Input - Output Library 
using namespace std; //Name-space under which 

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=3.2714e1f;//32.174 ft/sec^2
const float CNVFTM=3.281f;//3.281ft/meter
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float altFt,altM,time;//Altitude and Time
    
    //Input data
    cout<<"This problem calculates the altitude";
    cout<<"drop in free fall"<<endl;
    cout<<"Input the measured time in seconds"; 
    cout<<"for the object to drop"<<endl;
    cin>>time;
    //Map inputs to outputs or process the data
    //altFt=1/2*GRAVITY*time*time; // Bad since 1/2= 0
    altFt=GRAVITY*time*time/2;
    //altFt=GRAVITY/2*pow(time,2);       //Expensive Funds
    //altFt=GRAVITY/2*exp(2*log(time)); //Very Expensive
    altM=altFt/CNVFTM;
            
    //Output Located Here
    cout<<"The distance dropped = "<<altFt<<"(ft)"<<endl;
    cout<<"The distance dropped = "<<altM<<"(m)"<<endl;

    //Exit
    return 0;
}

