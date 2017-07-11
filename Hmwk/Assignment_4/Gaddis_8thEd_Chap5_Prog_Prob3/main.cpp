/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 6th, 2017, 9:25 PM
 * Purpose:  Ocean level
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float yrs;//The number of years
    float milMt;//Millimeter
    float mmPrYrs=1.5f;//Millimeters per year
   
    //Output the transformed data
    
    for (int yrs=1;yrs<=25;yrs++)
    {
        milMt+=1.5;
        cout<<"Year "<< yrs<<": "<<milMt<<" Millimeter "<<endl;
        
    }
 
        
    
    //Exit stage right!
    return 0;
}

