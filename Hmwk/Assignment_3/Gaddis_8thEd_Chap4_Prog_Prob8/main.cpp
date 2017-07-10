/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 30, 2017, 6:12 PM
 * Purpose:  Color Mixer
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    
    string color1;//The first color 
    string color2;//The second color
    
    //Map inputs to outputs or process the data
    cout<<"This program mixes two primary colors"<<endl;
    cout<<"Enter a primary color. First letter Capital."<<endl;
    cin>>color1;
    
    //Output the transformed data 
   
    if(color1=="Red"){
        
               
        
          cout<<"Enter another primary color"<<endl;
          cin>>color2;
           
   
          
         if(color2=="Blue"){
             cout<<"The result is Purple."<<endl;
         }
         if(color2=="Yellow"){
              cout<<"The Result is Orange."<<endl;
          }
        else 
        cout<<"Error the two colors entered are not all primary colors "<<endl;
    }
    if(color1=="Blue"){
        
               
        
          cout<<"Enter another primary color"<<endl;
          cin>>color2;
           
   
          
         if(color2=="Red"){
             cout<<"The result is Purple."<<endl;
         }
         if(color2=="Yellow"){
              cout<<"The Result is Green."<<endl;
          }
        else 
        cout<<"Error the two colors entered are not all primary colors "<<endl;
    }
    
    if(color1=="Yellow"){
        
               
        
          cout<<"Enter another primary color"<<endl;
          cin>>color2;
           
   
          
         if(color2=="Blue"){
             cout<<"The result is Green."<<endl;
         }
         if(color2=="Red"){
              cout<<"The Result is Orange."<<endl;
          }
        else
            cout<<"Error the two colors entered are not all primary colors "<<endl;
    }
    else if (color1!="Red"||"Blue"||"Yellow"){
            cout<<"That is not a Primary color"<<endl;
    }
    
    //Exit stage right!
    return 0;
}

