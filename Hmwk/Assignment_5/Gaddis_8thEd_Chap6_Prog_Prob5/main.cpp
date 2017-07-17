/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 5:41M
 * Purpose:  Falling Distance 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>    //Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float fallDist (int t=0);//
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables/Initialize variables
    int time=0;
    float dist=0;
   
    //Map inputs to outputs or process the data
    cout<<"This program calculates the distance of an object falling in 10 secs"<<endl;
    
    //Output the transformed data
    for (int i=1;i<=10;i++)
    {
        dist=fallDist(i);
        cout<<i<<"seconds: "<<dist<<" meters"<<endl;
    }
    
    
    //Exit stage right!
    return 0;
}
float fallDist (int t)
{
    float dist=0;
    const float g=9.8f;
    
    dist= g*(pow (t,2))/2;
    
    return dist;
            
}
