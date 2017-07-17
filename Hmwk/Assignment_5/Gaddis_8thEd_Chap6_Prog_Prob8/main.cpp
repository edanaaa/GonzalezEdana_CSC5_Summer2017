/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 8:25 PM
 * Purpose:  Coin Toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random seed
#include <ctime>  //Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float coinTos(void);

//Execution begins here
int main(int argc, char** argv) {
    //Set Random number seed
    srand((time(0)));
    
    //Declare variables
    int toss;//Number that the coin is tossed
    int num;//Random Number
   
    //Map inputs to outputs or process the data
    cout<<"How many times should the coin be tossed?"<<endl;
    cin>>toss;
    
    //Output the transformed data
    for (int i=1;i<=toss;i++ )
    {
        num = coinTos();
        if (num==1)
            cout<<"Heads"<<endl;
        else
            cout<<"Tails"<<endl;
        
    }
    //Exit stage right!
    return 0;
}

float coinTos(void)
{
    int num;
    
    num=1+rand()%2;
    
    return num;
}