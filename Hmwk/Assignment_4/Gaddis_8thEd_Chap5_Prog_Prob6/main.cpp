/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 9, 2017, 12:21 AM
 * Purpose:  Distance traveled
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
    float dist;//Distance
    float speed;//The speed
    float time;//The time
    float yrTime;
    
    //Map inputs to outputs or process the data
    cout<<"This program calculates the distance your car has traveled"<<endl;
    cout<<"Enter the speed of your vehicle (in miles per hours): "<<endl;
    cin>>speed;
    cout<<"Enter the number of hours that you have traveled: "<<endl;
    cin>>yrTime;
    
            
    //Output headers
    
    cout<<"Hours  Distance Traveled\n ";
    cout<<"---------------------------\n";
    
    for (time=1;time<=yrTime;time++)
    {
        //Calculate distance
        dist=speed*time;
        
        //Display time and distance
        cout<< time <<"\t"<<dist<<endl;
    }
    
    
    
    //Exit stage right!
    return 0;
}

