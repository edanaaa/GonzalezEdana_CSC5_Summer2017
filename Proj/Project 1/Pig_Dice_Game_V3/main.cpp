/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 20, 2017, 8:40 PM
 * Purpose:  Pig Dice Game V3
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Time Seed
#include <ctime>     //Time Library
#include <fstream>   //File I/O
#include <string>    //Strings
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    ifstream in;       //Input File
    ofstream out;      //Output File
    const int scLimit=100; //Score Limit
    int choice;        //Choice for how many players the user wants
    char choice1;      //Choice Roll or Hold for player 1
    char choice2;      //Choice Roll or Hold for player 2
    char choice3;      //Choice Roll or Hold for player 3
    string name;       //Name of Players
    float sum1,sum2,sum3;//Sum of player 1, Sum of player 2, Sum of player 3
    int roll1;         //Roll for player 1
    int roll2;         //Roll for player 2
    int roll3;         //Roll for player 3
    bool y=true;
    bool x =true;
    
    //Initialize variables
    string inName="GameInfo.dat";   //String Name
    string outName="GameInfo.dat";  //String Name
    in.open(inName.c_str());        //Open the Input file
    out.open(outName.c_str());      //Open the Output file
    while(in>>choice);              //Last value becomes the number of choice
    
    //The objective of the Game and the number of players
    cout<<"The Objective of the dice game Pig is to be the first to score 100 points"
        <<endl;
    cout << "how many players want to play PIG 1, 2,or 3"<<endl;
    cin>>choice;
    
    if(choice<=3) {//The names of the players
        for (int i=1;i<=choice;i++){
            cout << "Please enter your name: " <<endl;
            cin>>name;
            cout<<name<< " is player " <<i<<endl;  
        }
    }
    //Output for Number of players 1 , 2 , or 3
    switch (choice) {//Switch Statement for number of players
        case 1://For One Player in Pig Dice Game
                roll1=rand()%6+1;
                do{
                    while(x=true){
                        cout<<" "<<endl;
                        cout<<"PLayer 1"<<endl;
                        cout<<"Enter r to roll or h to hold: "<<endl;
                        cin>>choice1;
                        roll1=rand()%6+1;
                        if(choice1=='r'){
                            cout<<"Your Roll: "<<roll1<<endl;
                            if(roll1==1){
                                cout<<"0 points"<<endl; 
                                sum1=0;
                                x=false;
                                break;
                            }
                            else{
                                sum1+=roll1;
                                cout<<"Sum: "<<sum1<<endl;
                                if(sum1=scLimit||sum1>scLimit){
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
                    }while(y=true);
        case 2://For Two Players in Pig Dice Game
                roll1=rand()%6+1;
                roll2=rand()%6+1;
                do{
                    while(x=true){
                        cout<<" "<<endl;
                        cout<<"PLayer 1"<<endl;
                        cout<<"Enter r to roll or h to hold: "<<endl;
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
                                if(sum1>=scLimit){
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
                        cout<<"Enter r to roll or h to hold: "<<endl;
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
                                if(sum2>=scLimit){
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

        case 3://For Three Players in Pig Dice Game
                roll1=rand()%6+1;
                roll2=rand()%6+1;
                roll3=rand()%6+1;
                do{
                    while(x=true){
                        cout<<" "<<endl;
                        cout<<"PLayer 1"<<endl;
                        cout<<"Enter r to roll or h to hold: "<<endl;
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
                                if(sum1>=scLimit){
                                cout<<"Player 1 Wins!"<<endl;
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
                    cout<<"Player 2"<<endl;
                    while(x=true){
                        cout<<"Enter r to roll or h to hold: "<<endl;
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
                                if(sum2>=scLimit){
                                    cout<<"Player 2 Wins!"<<endl;
                                    return 0;
                                }
                            }
                        }
                        else if(choice2=='h'){
                            break;
                        }
                    }
                    cout<<" "<<endl;
                    cout<<"PLayer 3"<<endl;
                    while(x=true){
                        cout<<"Enter r to roll or h to hold: "<<endl;
                        cin>>choice3;
                        roll3=rand()%6+1;
                        if(choice3=='r'){
                            cout<<"Your Roll: "<<roll3<<endl;
                            if(roll3==1){
                                cout<<"0 points"<<endl; 

                                x=false;
                                sum3=0;
                                break;
                            }
                            else{
                                sum3 += roll3;
                                cout<<"Sum: "<<sum3<<endl;
                                if(sum3>=scLimit){
                                    cout<<"Player 3 Wins!"<<endl;
                                    return 0;
                                }
                            }
                        }
                        else if(choice3=='h'){
                            break;
                        }
                    }
                    continue;

                }while(y=true);    

        default://If the number 1,2, or 3 is not entered
            cout<<"You did not enter a 1, 2, or 3! Run the program again and select 1-3 players"<<endl;    
        }
    //Exit stage right!
    in.close();
    out.close();
    
    return 0;
}

