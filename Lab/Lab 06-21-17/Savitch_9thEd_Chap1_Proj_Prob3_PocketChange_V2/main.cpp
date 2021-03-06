/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 21, 2017, 11:35 AM
 * Purpose:  Pocket Change
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    short nQts,nDms,nNks;//Number of Quarters,Dimes,Nickels (0, 32767)
    short poktChg;//Number of cents in your pocket
    char vQts=25,vDms=10,vNks=5;//Value of Quarters,Dimes,Nickels
    //Initialize variables
    
    //Input data
    cout<<"This program calculates your pocket change"<<endl;
    cout<<"Input the number of Quarters, Dimes, Nickels"<<endl;
    cout<<"Inputs are limited to 32767 coins apiece"<<endl;
    cin>>nQts>>nDms>>nNks;
            
    //Map inputs to outputs or process the data
    //Remember nQts, nDms, nNks are characters not integers 
    poktChg=nQts*vQts+nDms*vDms+nNks*vNks;
    
    
    //Output the transformed data
    cout<<nQts<<"Quarters + ";
    cout<<nDms<<" Dimes + ";
    cout<<nNks<<" Nickels = ";
    cout<<poktChg<<" Cents or ";
    cout<<poktChg/100.0f<<(poktChg%10==0?'0':' ')<<" Dollars"<<endl;
    
    //Exit stage right!
    return 0;
}

