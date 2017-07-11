/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 10, 2017, 7:20 PM
 * Purpose:   Characters for the ASCII Codes
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
    char letter=0;
    
    //Output the transformed data
    cout<<"Displays the character for ASCII codes 0 through 127."<<endl;
    
    for (int count=0;count<=127;count++)
    {
        if (count % 16==0)
            cout<<endl;
           
        cout<<letter<<" ";
        letter++;
    }
    
    //Exit stage right!
    return 0;
}

