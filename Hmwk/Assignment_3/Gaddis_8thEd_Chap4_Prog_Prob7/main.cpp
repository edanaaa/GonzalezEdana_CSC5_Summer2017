/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 2, 2017, 4:50 PM
 * Purpose: Time Calculator
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
    float time;//Time in seconds
    float min;//Seconds to minutes
    float hrs;//Seconds to hours
    float day;//Seconds to days
    
    //Map inputs to outputs or process the data
    cout<<"Enter a number of seconds"<<endl;
    cin>>time;
    
    //Input
    min=time/60;//Conversion to seconds to min
    hrs=time/3600;//Conversion to seconds to hours
    day=time/86400;//Conversion to seconds to days
    
    //Output the transformed data
    
    if (time>=60&&time<3600){
        cout<<fixed<<setprecision(0);
        cout<<"The number of minutes in that many seconds is: "<<min<<endl;
    }
    else if(time>=3600&&time<86400)
        cout<<"The number of hours in that many seconds is: "<<hrs<<endl;
    else 
        cout<<"The number of days in that many seconds is "<<day<<endl;
        
              
    
    //Exit stage right!
    return 0;
}

