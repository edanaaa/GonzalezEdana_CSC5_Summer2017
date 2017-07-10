/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 19, 2017, 1:22 PM
 * Purpose: Sum of 2 Numbers V2
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
    short snum1,snum2;//1Byte data type range [0,255]
    short ssum;      //1 Byte data type range [0,255]
    
   //Initialize variables
    snum1=50;
    snum2=100;
          
   //Maps inputs to outputs or process the data
    ssum=snum1+snum2;
    
   //output results
    cout<<"Result is in range for a short"<<endl;
    cout<<snum1<<"+"
        <<snum2<<"="
        <<ssum<<endl;
    
    //Initialize variables
    snum1=2000;
    snum2=3000;
    
    //Map inputs to outputs or process the data
    ssum=snum1+snum2;
    
    //Output the transformed data
    cout<<"Show what happens when result is out of range for a short"<<endl;
    cout<<snum1<<"+"
        <<snum2<<"="
        <<ssum<<endl;
    
    //Declare variables
    unsigned short usnum1,usnum2;//1 Byte data type range [0,2^16-1]
    unsigned short ussum; //1 Byte data type range [0,2^16-1]
    
    //Initialize variables
    usnum1=3000;
    usnum2=4000;
            
    
    //Map inputs to outputs or process the data
    ussum=usnum1+usnum2;
    
    //Outputs the tranformed data
    cout<<"Show what happens when results is out of range for a unsigned short"<<endl;
    cout<<usnum1<<"+"
        <<usnum2<<"="
        <<ussum<<endl;
    
   //exit stage right

    return 0;
}