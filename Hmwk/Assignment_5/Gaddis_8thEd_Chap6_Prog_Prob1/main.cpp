/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 2:23 PM
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calRetail(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables/Initialize variables
    float whsleCt=0;//The Wholesale cost
    float mrkPerc=0;//Markup Percentage
    float retPric=0;//The total Price
   
    //Map inputs to outputs or process the data
    cout<<"Enter item's wholesale cost and is mark up percentage"<<endl;
    cin>>whsleCt>>mrkPerc;
    
    //Output the transformed data
    while (whsleCt<=0 || mrkPerc<0)
    {
        cout<<"Please enter a number that is not negative for the Wholesale price and percentage: "<<endl;
        cin>>whsleCt>>mrkPerc;     
    }
    
    retPric=calRetail(whsleCt,mrkPerc);
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The retail price is : $ "<<retPric<<endl;
    
    
    //Exit stage right!
    return 0;
}
float calRetail(float whsleCt,float mrkPerc)
{
    float totCost=0; 
    totCost=(whsleCt/100)*mrkPerc+whsleCt;
    return totCost;
}
