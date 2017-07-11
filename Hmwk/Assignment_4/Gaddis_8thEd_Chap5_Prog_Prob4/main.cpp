/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 9, 2017, 9:06 PM
 * Purpose:  Calories Burned
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
    float burn;        //The amount of calories burned
    float calPrmn=3.6f;//Calories per minute
    float min;         //Minutes
   
    //Output the transformed data
    for (min=5;min<=30;min+=5)
    {
        burn=min*calPrmn;
        cout<<"In "<<min<<" minutes you burned "<<burn<<" calories"<<endl;
    }    
        
    //Exit stage right!
    return 0;
}

