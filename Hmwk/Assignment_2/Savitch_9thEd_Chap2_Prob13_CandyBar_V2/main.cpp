/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 27, 2017, 10:47 AM
 * Purpose:  Candy Bar
 */

//System Libraries Here
#include <iostream> //Input - Output Library
#include <cstdlib> //Library with the random number generated
#include <ctime> //
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables 
    char sex,nCdyBar;
    unsigned short wt,age,ht,bmr;
    unsigned int cndyCal=230;//230 calories for a chocolate candy bar
    
    //Randomly Generate the Data
    wt=rand()%221+80;//[80,300)]
    age=rand()%55+18;//[18,72]
    ht=rand()%25+56;//[56,80]
    sex=rand()%2*7+70;//70 = char F, 77= char M
  
  
    //Map inputs to outputs or process the data
    bmr=(sex=='F')?
        655+4.3*wt+4.7*ht-4.7*age:
        66+6.3*wt+12.9*ht-6.8*age;
    nCdyBar=bmr/cndyCal;
    
    //Output the tranformed data
    cout<<"Given sex="<<sex<<" wt="<<wt<<" (lbs) ht="<<ht<<"(in) age="
        <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day= "<<
          static_cast<int>(nCdyBar)<<endl;
    
 
    //Exit
    return 0;
}

