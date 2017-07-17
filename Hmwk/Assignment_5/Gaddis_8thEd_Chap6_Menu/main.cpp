/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 15, 2017, 10:36 PM
 * Purpose: Chapter 6 Menu
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format
#include <cmath>    //Math library
#include <cstdlib>   //Random seed
#include <ctime>  //Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calRetail(float,float);

float gtSals (string);
void fHighst(float,float,float,float);

int gtNumAc (string);
void fLowest (int,int,int,int,int);

float fallDist (int t=0);

float kEnrgy (int , int);

float celsius (float);

float coinTos(void);

float preVal (float,float,int);

float futVal (float,float,int);

//Execution begins here
int main(int argc, char** argv) {
//Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem 7"<<endl;
        cout<<"Type 7 for Problem 8"<<endl;
        cout<<"Type 8 for Problem 9"<<endl;
        cout<<"Type 9 for Problem 10"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Declare variables/Initialize variables
                
                 float whsleCt=0;//The Wholesale cost
                float mrkPerc=0;//Markup Percentage
                float retPric=0;//The total Price
   
                //Map inputs to outputs or process the data
                cout<<"Enter item's wholesale cost and is mark up percentage"<<endl;
                cin>>whsleCt>>mrkPerc;
    
                //Output the transformed data
                while (whsleCt<=0 || mrkPerc<0)
                {
                    cout<<"Please enter a number that is not negative for the Wholesale price and percentage: "<<endl;
                    cin>>whsleCt>>mrkPerc;     
                }
    
                retPric=calRetail(whsleCt,mrkPerc);
                cout<<setprecision(2)<<fixed<<showpoint;
                cout<<"The retail price is : $ "<<retPric<<endl;
    
                break;
            }
            case '2':{
                
                //Declare variables
                float nEast;//Northeast
                float sEast;//Southeast
                float nWest;//Northwest
                float sWest;//Southwest
    
                //Output the transformed data
                for (int i=0;i<4;i++)
                {
                switch (i)
                    {
                        case 0 : nEast=gtSals("nEast");break;
                        case 1 : sEast=gtSals("sEast");break;
                        case 2 : nWest=gtSals("nWest");break;
                        default: sWest=gtSals("sWest");break;
            
                    }
                }
                fHighst(nEast,sEast,nWest,sWest);
                
                break;
            }
            case '3':{
                //Declare variables
                int north;  //North Geographic regions
                int south;  //South Geographic regions
                int east;   //East Geographic regions
                int west;   //West Geographic regions
                int central;//Central Geographic regions
    
                //Output the transformed data
                for (int i=0;i<5;i++)
                {
                switch(i)
                {
                    case 0: north=gtNumAc("North");break;
                    case 1: south=gtNumAc("South");break;
                    case 2: east=gtNumAc("East");break;
                    case 3: west=gtNumAc("West");break;
                    default:central=gtNumAc("Central");break;
                }
                }
    
                fLowest(north,south,east,west,central);
                break;
            }
            case '4':{
                //Declare variables/Initialize variables
                int time=0;
                float dist=0;
   
                //Map inputs to outputs or process the data
                cout<<"This program calculates the distance of an object falling in 10 secs"<<endl;
    
                //Output the transformed data
                for (int i=1;i<=10;i++)
                {
                    dist=fallDist(i);
                    cout<<i<<" seconds: "<<dist<<" meters"<<endl;
                }
                break;
            }
            case '5':{
                //Declare variables
                float mass=0;//Mass in kilograms
                float velocty=0;//Velocity in meters per second
                float kE=0;//Kinetic Energy
    
                //Map inputs to outputs or process the data
                cout<<"Enter the mass of an object (kilograms): "<<endl;
                cin>>mass;
                cout<<"Enter velocity of the object (meters per sec); "<<endl;
                cin>>velocty;
    
                //Output the transformed data
                kE=kEnrgy(mass,velocty);
                cout<<"The Kinetic Energy of the object is: "<<kE<<" Joules"<<endl;
                
                break;
            }
            case '6':{
                //Declare variables
                float cel=0.0f;//
                float fahre=0.0f;//Fahrenheit temperature 
    
    
                //Map inputs to outputs or process the data
                cout<<"This program displays Celsius temperature for 0 to 20 "<<endl;
                cout<<"Fahrenheit    Celsius "<<endl;
                //Output the transformed data
                for (int i=0;i<=20;i++)
                {
                    cel=celsius(i);
        
                    cout<<setw(5)<<i<<setw(15)<<setprecision(2)<<fixed
                    <<showpoint<<cel<<endl;
                }
                    break;
            }
            case '7':{
                //Set Random number seed
                srand((time(0)));
    
                //Declare variables
                int toss;//Number that the coin is tossed
                int num;//Random Number
   
                //Map inputs to outputs or process the data
                 cout<<"How many times should the coin be tossed?"<<endl;
                cin>>toss;
    
                //Output the transformed data
                for (int i=1;i<=toss;i++ )
                {
                    num = coinTos();
                    if (num==1)
                        cout<<"Heads"<<endl;
                    else
                         cout<<"Tails"<<endl;
        
                }
                break;
            }
            case '8':{
                //Declare variables
                float presVal=0;//amount that you need to deposit today
                float futVal=10000;//future value that you want in the account
                float rate=0;//Annual interest rate
                int numYrs=0;//the number of years that you plan to let the money sit in the account
   
    
                //Map inputs to outputs or process the data
                cout<<"Enter the future value that you want in the account."<<endl;
                cin>>futVal;
                cout<<"Enter the annual interest rate."<<endl;
                cin>>rate;
                cout<<"Enter number of years that you plan to let the money sit in the account"<<endl;
                cin>>numYrs;
    
                //Output the transformed data
                presVal=preVal(futVal,rate,numYrs);
                cout<<"In order to save "<<futVal<<" you need to deposit: $"<<presVal<<endl;
    
                break;
            }
            case '9':{
                 //Declare variables
                 float presVal=0;//present value of account
                 float fVal=0;//future value after the specified time period
                float rate=0;//monthly interest rate
                int numMon=0;//the number of months
   
    
                //Map inputs to outputs or process the data
                cout<<"Enter the account’s present value."<<endl;
                cin>>presVal;
                cout<<"Enter the monthly interest rate."<<endl;
                cin>>rate;
                cout<<"Enter the number of months that the money will be left in the account."<<endl;
                cin>>numMon;
    
                //Output the transformed data
                fVal=futVal(presVal,rate,numMon);
                cout<<"The account’s future value is: $"<<fVal<<endl;
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

float calRetail(float whsleCt,float mrkPerc)
{
    float totCost=0; 
    totCost=(whsleCt/100)*mrkPerc+whsleCt;
    return totCost;
}


float gtSals(string name)
{
    float sales=0;
    cout<<"Enter sales for division "<<name<<" $ "<<endl;
    cin>>sales;
    
    while (sales<0)
    {
        cout<<"Sales Cannot be negative number re-enter a number: "<<endl;
        cin>>sales;
    }
        return sales;
            
   }

    void fHighst(float nEast,float sEast,float nWest,float sWest)
    {
       float highest=0;
       string division = " ";
    
            if (nEast>sEast && nEast>nWest && sEast>sWest)
            {
              highest=nEast;
              division="North East";
            }
              else if (sEast>nEast && sEast>nWest && sEast>sWest)
            {
               highest=sEast;
               division="South East";
            }
              else if (nWest>nEast && nWest>sEast && nWest>sWest)
            {
              highest=nWest;
              division="North West";
            }
             else  
            {
               highest=sWest;
               division="South West";
            }
                cout<<"The highest division sales is "<<division<<" with total sales of $ "
                           <<highest<<endl;
    
}
    
    
int gtNumAc (string region)
{
    int acc=0;//Accidents
    cout<<"Enter number of accident for region: "<<region<<endl;
    cin>>acc;
    
    while (acc<0)
    {
        cout<<"Number of accidents must be positive. Re-Enter "<<endl;
        cin>>acc;
        
    }
    return acc;
}

void fLowest (int north,int south,int east,int west,int central)
{
    int lowest=0;
    string region=" ";
    
    if (north<south && north<east && north<west && north<central)
    {
        lowest=north;
        region="North";
    }
    
    else if (south<north && south<east && south<west && south<central)
    {
        lowest=south;
        region="South";
    }
    
    else if (east<north && east<south && east<west && east<central)
    {
        lowest=east;
        region="East";
    }
    else if (west<north && west<south && west<east && west<central)
    {
        lowest=west;
        region="West";
    }
    else
    {
        lowest=central;
        region="Central";
    }
    cout<<"The region with the lowest accidents is "<<region<<endl;
    cout<<"Total number of accidents in that region was: "<<lowest<<endl;
}
    
float fallDist (int t)
{
        float dist=0;
        const float g=9.8f;
    
        dist= g*(pow (t,2))/2;
    
        return dist;
            
}
    
float kEnrgy (int m,int v)
{
    
    return m*(pow(v,2))/2;
    
    
}


float celsius (float f)
{
    float c=0.0f;
    
    c=5*(f-32)/9;
    
    return c;
}


float coinTos(void)
{
    int num;
    
    num=1+rand()%2;
    
    return num;
}

float preVal (float f,float r,int n)
{
    float p;
    
    p=f/(pow ((1+(r*0.01)),n));
    
    return p;
            
}

float futVal (float p,float i,int n)
{
    float f;
    
    f=p*(pow ((1+(i*0.01)),n));
    
    return f;
            
}