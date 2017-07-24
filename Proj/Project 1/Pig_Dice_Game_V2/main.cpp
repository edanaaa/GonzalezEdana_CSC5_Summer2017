/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 19, 2017, 5:32 PM
 * Purpose: Pig Dice Game V2
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>    //Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char choice1;
    char choice2;
    int sum1,sum2;
    int roll1;
    int roll2;
    bool y=true;
    bool x =true;

    //Output the transformed data
    roll1=rand()%6+1;
    roll2=rand()%6+1;

    do{
        while(x=true){
            cout<<" "<<endl;
            cout<<"PLayer 1"<<endl;
            cout<<"R or H"<<endl;
            cin>>choice1;
            roll1=rand()%6+1;
            if(choice1=='r'){
                cout<<"Your Roll: "<<roll1<<endl;
                if(roll1==1){
                    sum1=0;
                    cout<<"0 points"<<endl; 
                    x=false;
                    break;
                }
                else{
                    sum1+=roll1;
                    cout<<"Sum: "<<sum1<<endl;
                    if(sum1>=100){
                    cout<<"Player 1 Wins!!"<<endl;
                    return 0;
                    }
                }
            }
            else if(choice1=='h'){
                x=false;
                break;
            }
             
        }
        
        cout<<" "<<endl;
        cout<<"PLayer 2"<<endl;
        while(x=true){
            cout<<"R or H"<<endl;
            cin>>choice2;
            roll2=rand()%6+1;
            if(choice2=='r'){
                cout<<"Your Roll: "<<roll2<<endl;
                if(roll2==1){
                    cout<<"0 points"<<endl; 
                    
                    x=false;
                    sum2=0;
                    break;
                }
                else{
                    sum2 += roll2;
                    cout<<"Sum: "<<sum2<<endl;
                    if(sum2>=100){
                        cout<<"Player 2 WIns"<<endl;
                        return 0;
                    }
                }
            }
            else if(choice2=='h'){
                break;
            }
        }
        continue;
    }while(y=true);
    //Exit stage right!
    return 0;
}

