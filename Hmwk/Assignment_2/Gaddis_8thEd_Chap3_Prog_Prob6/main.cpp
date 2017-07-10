/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 8:56 PM
 * Purpose:  Ingredient Adjuster
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
    float sugar=0.03125f; //Amount of sugar in cups needed in the recipe to produce 1 cookies
    float butter=0.02083333f;//Amount of butter in cups needed in the recipe to produce 1 cookies
    float flour=0.05729167f; //Amount of flour in cups needed in the recipe to produce 1 cookies
    float numCk;        //Number of cookies
    float totSug;       //Total amount of sugar
    float totBut;       //Total amount of butter
    float totFlo;       //Total amount of flour
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"How many cookies would you like to make (up to 48 cookies)? "<<endl;
    cin>>numCk;
    
    //Input data
    totSug=numCk*sugar;
    totBut=numCk*butter;
    totFlo=numCk*flour;
    
    //Output the transformed data
    cout<<"The total amount of sugar needed to make the cookies:  "<<totSug<<"  cups"<<endl;
    cout<<"The total amount of butter needed to make the cookies: "<<totBut<<"    cups"<<endl;
    cout<<"The total amount of flour needed to make the cookies:  "<<totFlo<<" cups"<<endl;
    //Exit stage right!
    return 0;
}

