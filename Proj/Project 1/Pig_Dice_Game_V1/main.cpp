/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 17, 2017, 8:14 PM
 * Purpose:  Pig Dice Game Version 1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random seed
#include <ctime>     //Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int ctrSc=0;
    int rll;
    char rolrHld;
    int numRll=0;
    int totSc=0;
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"The Objective of the dice game Pig is to be the first to score 100 points"
        <<endl;
    cout<<"Enter r to roll or h to hold"<<endl;
    cin>>rolrHld;
    //Output the transformed data
    
    while (rolrHld=='r')
    {
       srand(static_cast<unsigned int>(time(0)));
       rll=rand()%6+1;
       if(rll==1)
       {
           cout<<"You rolled a 1."<<endl;
           cout<<"Player's turn ends and receives no points."<<endl;
           break;
       }
       else
       {
           ctrSc+=rll;
           cout<<"You rolled a "<<rll<<". Your score is: "<<ctrSc<<endl;
           cout<<"Enter r to roll or h to hold."<<endl;
           cin>>rolrHld;
       }
    
    
    while(rolrHld=='h')
    {
        totSc=ctrSc;
        cout<<"Your score is : "<<totSc<<endl;
        break;
    }
    }
    
    //Exit stage right!
    return 0;
}

