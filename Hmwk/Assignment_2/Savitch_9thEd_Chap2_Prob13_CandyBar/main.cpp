/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 10:47 AM
 * Purpose:  Candy Bar
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
    //Declare all Variables 
    char sex,nCdyBar;
    unsigned short wt,age,ht,bmr;
    unsigned int cndyCal=230;//230 calories for a chocolate candy bar
    
  
    //Input data
    cout<<"Calculate how many candy bars you can eat/day "<<endl;
    cout<<"Input your Weight(lbs), Height(in), and Age(yrs)"<<endl;
    cin>>wt>>ht>>age;
    cout<<"Input your sex M/F"<<endl;
    cin>>sex;
    
       
    //Map inputs
    bmr=(sex=='F')?
        655+4.3*wt+4.7*ht-4.7*age:
        66+6.3*wt+12.9*ht-6.8*age;
    nCdyBar=bmr/cndyCal;
    
    //Process/Calculations 
    cout<<"Given sex="<<sex<<" wt="<<wt<<" (lbs) ht="<<ht<<"(in) age="
        <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day= "<<static_cast<int>(nCdyBar)<<endl;
    
    //Output Located Here
  

    //Exit
    return 0;
}

