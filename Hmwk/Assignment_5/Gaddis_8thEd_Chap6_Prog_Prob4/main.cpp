/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on July 17, 2017, 4:41 PM
 * Purpose: Safest Driving Area  
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int gtNumAc (string);
void fLowest (int,int,int,int,int);
//Execution begins here
int main(int argc, char** argv) {
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
            
   
    //Exit stage right!
    return 0;
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