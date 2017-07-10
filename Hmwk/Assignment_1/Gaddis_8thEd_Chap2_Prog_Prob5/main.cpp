/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 20, 2017, 8:37 PM
 * Purpose: Average Value
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
    float var1=28;//28 is variable 1
    float var2=32;//32 is variable 2
    float var3=37;//37 is variable 3
    float var4=24;//24 is variable 4
    float var5=33;//33 is variable 5
    float sum;//the sum of the 5 variables
    float avgVal;//the average value of the sum
    
   //Input Data Value
    sum=var1+var2+var3+var4+var5;
    avgVal=sum/5;
            
   //process the input
    
   //output results
    cout<<"The sum of the 5 variables: "<<sum<<endl;
    cout<<"The average value: "<<avgVal<<endl;
    
   //exit stage right

    return 0;
}