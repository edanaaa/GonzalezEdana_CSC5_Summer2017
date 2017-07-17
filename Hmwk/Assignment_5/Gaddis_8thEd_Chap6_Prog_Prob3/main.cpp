/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 2:57 PM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float gtSals (string);
void fHighst(float,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nEast;//Northeast
    float sEast;//Southeast
    float nWest;//Northwest
    float sWest;//Southwest
    
    //Output the transformed data
    for (int i=0;i<4;i++)
    {
        switch (i)
        {
            case 0 : nEast=gtSals("nEast");break;
            case 1 : sEast=gtSals("sEast");break;
            case 2 : nWest=gtSals("nWest");break;
            default: sWest=gtSals("sWest");break;
            
        }
    }
    fHighst(nEast,sEast,nWest,sWest);
    
            
    //Exit stage right!
    return 0;
}

float gtSals(string name)
{
    float sales=0;
    cout<<"Enter sales for division "<<name<<" $ "<<endl;
    cin>>sales;
    
    while (sales<0)
    {
        cout<<"Sales Cannot be negative number re-enter a number: "<<endl;
        cin>>sales;
    }
    return sales;
            
}

void fHighst(float nEast,float sEast,float nWest,float sWest)
{
    float highest=0;
    string division = " ";
    
    if (nEast>sEast && nEast>nWest && sEast>sWest)
    {
        highest=nEast;
        division="North East";
    }
    else if (sEast>nEast && sEast>nWest && sEast>sWest)
    {
        highest=sEast;
        division="South East";
    }
    else if (nWest>nEast && nWest>sEast && nWest>sWest)
    {
        highest=nWest;
        division="North West";
    }
    else  
    {
        highest=sWest;
        division="South West";
    }
    cout<<"The highest division sales is "<<division<<" with total sales of $ "
            <<highest<<endl;
    
}