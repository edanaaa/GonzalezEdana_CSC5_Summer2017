/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 29, 2017, 1:30 PM
 * Purpose:  Fibonacci
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
    int fi,fim1,fim2;
    
    //Initialize variables
    fim2=0;
    fim1=1;
    
    //Calculate the next term in the series
    fi=fim1+fim2;
    cout<<"The Fibonacci Sequence"<<endl;
    cout<<fim2<<","<<fim1<<","<<fi;
    
    //Calculate the next term in the series
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    
     //Calculate the next term in the series
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    
     //Calculate the next term in the series
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    
    //Calculate the next term in the series
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

