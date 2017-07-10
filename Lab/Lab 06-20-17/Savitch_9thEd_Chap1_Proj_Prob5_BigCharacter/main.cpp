/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
     char c;
    //Initialize by input from command line
    cout<<"What character would you like to use";
    cout<<"to make a Big Letter C"<<endl;
    cin>>c;
    
    //Output the transformed data
    cout<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;   
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;     
    cout<<"  "<<c<<c<<c<<endl;
    

    //Exit
    return 0;
}

