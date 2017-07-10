/* 
 * File:   main.cpp
 * Author: Edana Gonzalez 
 * Created on June 28, 2017, 1:15 PM
 * Purpose:  Widgets
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
    float widWt;//The widgets weight 
    float pWtslf;//The weight of the pallet by itself 
    float wtWid=12.5f;//12.5 (lbs) the weight of one widget 
    float totWght;//The total weight of pallet and widgets
    float numWid;//Number of widgets stacked on the pallet
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"This program calculates the number of widgets stacked on the pallet "<<endl;
    cout<<"How much does the pallet weigh by itself (lbs)? "<<endl;
    cin>>pWtslf;
    cout<<"What is the total weight of the pallet with the widgets stacked (lbs)? "<<endl;
    cin>>totWght;
    
    //Input data
    widWt=totWght-pWtslf;
    numWid=widWt/wtWid;
    
    //Output the transformed data
    cout<<"The number of widgets stacked on the pallet is: "<<numWid<<endl;
    
    //Exit stage right!
    return 0;
}

