/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 2, 2017, 5:48 PM
 * Purpose: Book Club Points
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
    float numBk;//The number of books purchased 
    
    //Map inputs to outputs or process the data
    cout<<"Enter the number of books purchased this month: "<<endl;
    cin>>numBk;
    
    //Output the transformed data
    if (numBk==0)
        cout<<"You have earned 0 points"<<endl;
    else if (numBk==1)
        cout<<"You have earned 5 points"<<endl;
    else if (numBk==2)
        cout<<"You have earned 15 points"<<endl;
    else if (numBk==3)
        cout<<"You have earned 30 points"<<endl;
    else
        cout<<"You have earned 60 points"<<endl;
    
    
    //Exit stage right!
    return 0;
}

