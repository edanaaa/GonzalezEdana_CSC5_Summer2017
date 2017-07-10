/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 26, 2017, 12:50 PM
 * Purpose: Miles per Gallon
 */
//System Libraries
#include <iostream>   //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here !

int main(int argc, char** argv)
{
    //Declare Variables
    float numGal;//The Number of Gallons
    float numMil;//The Number of Miles
    float milpGal;//The Miles per Gallon

   //Input Data Value
    
   //Map inputs to outputs or process the data
   cout<<"This program calculates the miles per gallon of your car "<<endl;
   cout<<"Please enter the number of gallons that your car holds "<<endl;
   cin>>numGal;
   cout<<"Please enter the number of miles that your car can drive with a full tank "<<endl;
   cin>>numMil;
   
   //Initialize variables
   milpGal=numMil/numGal;
   
   //Output the transformed data
    cout<<"Your number of miles per gallon is:  "<<milpGal<<endl;
            
   //exit stage right

    return 0;
}
