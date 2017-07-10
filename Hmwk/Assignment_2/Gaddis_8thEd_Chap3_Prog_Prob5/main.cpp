/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 26, 2017, 9:39 PM
 * Purpose:  Male and Females Percentages
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Input = Output
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float numF;// The number of females in the class
    float numM;//The number of males in the class
    float totStu;//The total of students in the class
    float percF;//The percentage of females in the class
    float percM;//The percentage of males in the class

    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"Enter the number of Females in the class: "<<endl;
    cin>>numF;
    cout<<"Enter the number of Males in the class: "<<endl;
    cin>>numM;
    cout<<"Enter the total number of students in the class: "<<endl;
    cin>>totStu;
    
    //Initialize variables
    percF=(numF/totStu)*100;
    percM=(numM/totStu)*100;

    //Output the transformed data
    cout<<"The percent of Females in the class is: "<<setprecision(2)<<percF<<'%'<<endl;
    cout<<"The percent of Males in the class is: "<<setprecision(2)<<percM<<'%'<<endl;

    //Exit stage right!
    return 0;
}

