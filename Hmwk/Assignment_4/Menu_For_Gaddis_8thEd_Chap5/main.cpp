/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 10, 2017, 10:26 PM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MONTH=12;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1 "<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 10"<<endl;
        cout<<"Type 9 for Problem 11"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Declare variables
                int sum=0,posInt,num=0;
    
    
                //Map inputs to outputs or process the data
                cout<<"This program calculates the sum of numbers inputed"<<endl;
                cout<<"Enter a positive integer"<<endl;
                cin>>num;
    
                //Output the transformed data
                while (num<0)
                {
                cout<<"Please enter a positive value"<<endl;
                cin>>num;
        
                }
            
                for (int posInt=1;posInt<=num;posInt++)
                {
                sum+=posInt;
                }
                cout<<"Total sum is: "<<sum<<endl;
                break;
            }
            case '2':{
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
                break;
            }
            case '3':{
                //Declare variables
                float yrs;//The number of years
                float milMt;//Millimeter
                float mmPrYrs=1.5f;//Millimeters per year
   
                //Output the transformed data
    
                for (int yrs=1;yrs<=25;yrs++)
                {
                milMt+=1.5;
                cout<<"Year "<< yrs<<": "<<milMt<<" Millimeter "<<endl;
        
                }
                break;
            }
            case '4':{
                 //Declare variables
                 float burn;        //The amount of calories burned
                 float calPrmn=3.6f;//Calories per minute
                 float min;         //Minutes
   
                 //Output the transformed data
                 for (min=5;min<=30;min+=5)
                 {
                    burn=min*calPrmn;
                    cout<<"In "<<min<<" minutes you burned "<<burn<<" calories"<<endl;
                  }    
                  break;
            }
            case '5':{
                //Declare variables
                float yrs;//Years
                float memShip=2500;//The current charge of membership is $2,500 per year
                float memFee=0.04;//Increase of 4% in membership
    
                //Purpose of this program output
                cout<<"This program calculates the Membership Fee Increase in a country club"<<endl;
    
                //Output the transformed data
    
                for (yrs=1;yrs<=6;yrs++)
                {
        
                    memShip=memShip+(memShip*memFee);
        
                    cout<<"Years "<<yrs<<" fees are: $"<<memShip<<endl;
                }
                break;
            }
            case '6':{
                //Declare variables
                float dist;//Distance
                float speed;//The speed
                float time;//The time
                float yrTime;
    
                //Map inputs to outputs or process the data
                cout<<"This program calculates the distance your car has traveled"<<endl;
                cout<<"Enter the speed of your vehicle (in miles per hours): "<<endl;
                cin>>speed;
                cout<<"Enter the number of hours that you have traveled: "<<endl;
                cin>>yrTime;
    
            
                //Output the transformed data
    
                cout<<"Hours  Distance Traveled\n ";
                cout<<"---------------------------\n";
    
                for (time=1;time<=yrTime;time++)
                {
                    //Calculate distance
                    dist=speed*time;
        
                    //Display time and distance
                    cout<< time <<"\t"<<dist<<endl;
                }
                break;
            }
            case '7':{
                //Declare variables
                float pennies=1; //The amount of salary in pennies
                float totPay=0;  //The total amount of pay at the end of the period in pennies
                int   numDay;    //The number of days the user has worked
                int   days;      //The number of days
    
                //Input data
                cout<<"This program calculate how much a person would earn over a period of time if payed in pennies "<<endl;
                cout<<"Input the number of days worked: "<<endl;
                cin>>numDay;
    
    
                //Output the transformed data
                cout<<fixed<<setprecision(2)<<showpoint;
    
                for(days=1;days<=numDay;days++){
                totPay +=pennies;
                pennies += pennies; 
                cout<<"In "<<days<<" day(s) you have earned "<<totPay<<" in pennies"<<endl;
                }
                cout<<"The total amount of pay at the end of "
                    <<numDay<<" day(s)in dollars is: $ "<<totPay/100<<endl;
                
                break;
            }
            case '8':{
                //Declare variables
                int   numYrs=0;     //Number of years
                float totRfll=0.0f; //Total Rainfall
                float rainfall=0.0f;//Rainfall
                float avgRfall=0.0f;//The average rainfall
    
                //Input data
                cout<<"Enter number of years: "<<endl;
                cin>>numYrs;
    
                //Output the transformed data
                while (numYrs<1)
                {
                    cout<<"Number of years must be at least 1. Re-enter "<<endl;
                    cin>>numYrs;
                }
                for (int i=1;i<=numYrs;i++)
                {
                    for(int months=1;months<=MONTH;months++)
                    {
                    cout<<"Enter the rainfall for "<<months<<" month:"<<endl;
                    cin>>rainfall;
            
                    while (rainfall<0)
                    {
                    cout<<"The rainfall cannot be negative number. Re-enter: "<<endl;
                    cin>>rainfall;
                    }
                    totRfll+=rainfall;
                    }
                }
    
                cout<<"Number of months: "<<numYrs*MONTH<<endl;
                cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totRfll<<"inches."<<endl;
                cout<<"Average rainfall: "<<setprecision(2)<<fixed<<totRfll/(numYrs*MONTH)<<" inches"<<endl;
                break;
            }
            case '9':{
                //Declare variables
                float strtPop=0.0f;//The Start of Population
                int numDays;// The number of Days
                float avgInc=0.0f;//The average increase
                float dailyPp=0.0f;//Daily population
    
                //Map inputs to outputs or process the data
                cout<<"Enter the starting number of organisms: "<<endl;
                cin>>strtPop;
                cout<<"Enter the average daily increase in population(in percentage): "<<endl;
                cin>>avgInc;
                cout<<"Enter the number of days the population multiples: "<<endl;
                cin>>numDays;
    
                //Output the transformed data
                while (strtPop<2)
                {
                    cout<<"The starting population cannot be less than 2. Re-enter: "<<endl;
                    cin>>strtPop;
                }
                while (avgInc<1)
                {
                    cout<<"The average increase in population cannot be negative. Re-enter: "<<endl;
                    cin>>avgInc;
                }
                while (numDays<1)
                {
                    cout<<"The number of days cannot be less than 1. Re-enter: "<<endl;
                    cin>>numDays;
                }
    
                for(int i=1;i<=numDays;i++)
                {
                    //calculate increase
                    dailyPp=((avgInc/100)*strtPop)+strtPop;
                    //output
                    cout<<"Population for day "<<i<<"is "<<dailyPp<<endl;
        
                    strtPop=dailyPp;
                }
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

