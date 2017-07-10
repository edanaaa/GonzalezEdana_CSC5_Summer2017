/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 28, 2017, 6:00 PM
 * Purpose:  Areas of Rectangles
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
    float arRect1;//The area of rectangular 1
    float arRect2;//The area of rectangular 2
    float length1;//The length of rectangular 1
    float width1;//The width of rectangular 1
    float length2;//The length of rectangular 2
    float width2;//The width of rectangular 2
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"Enter the length and width of rectangular 1 (press space after each): "<<endl;
    cin>>length1>>width1;
    cout<<"Enter the length and width of rectangular 2 (press space after each): "<<endl;
    cin>>length2>>width2;
    
    //Input data
    arRect1=length1*width1;
    arRect2=length2*width2;
    
    //Output the transformed data
    if (arRect1==arRect2) {
        cout<<"The area of the rectangles are equal to each other "<<endl;
    }else if (arRect1>arRect2) {
        cout<<"The area of rectangle 1 is greater than rectangle 2 "<<endl;
    }else { 
        cout<<"The area of rectangle 2 is greater than rectangle 1 "<<endl;
        
    }
    cout<<"The area of rectangle 1 is: "<<arRect1<<endl;
    cout<<"The area of rectangles 2 is: "<<arRect2<<endl;
    
    //Exit stage right!
    return 0;
}

