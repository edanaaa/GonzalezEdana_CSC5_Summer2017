/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 19, 2017, 11:21 AM
 * Purpose: C++ Template
 */

//System Libraries 
#include <iostream>   //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries 

//Global Constants -> Physics/Math/Conversions

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float milBudg; //Military Budget
    float fedBudg; //Federal Budget
    float percMil; //Percentage Military Budget
    
    //Input or initialize values Here
    milBudg=609.3e09f; //609.3 Billion Dollars - Google Internet Search
    fedBudg=3.8e12f; //3.8 Trillion Dollars - Google Internet Search
    
    //Process/Calculations Here
    percMil=milBudg/fedBudg*100; //Percentage Result
    
    //Output Located Here
    cout<<"The Military Budget = $"<<milBudg<<endl;
    cout<<"The Federal Budget = $"<<fedBudg<<endl;
    cout<<"The Military Budget = $"<<percMil<<endl;

    //Exit
    return 0;
}

