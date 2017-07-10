/* 
 * File:   main.cpp
 * Author: Edana Gonzalez
 * Created on June 22, 2017, 4:24 PM
 * Purpose: Total Purchase
 */
//System Libraries
#include <iostream>   //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here !

int main(int argc, char** argv) 
{
    //Declare Variables
    float item1=15.95f;  //The price of item 1 in Dollars
    float item2=24.95f;  //The price of item 2 in Dollars
    float item3=6.95f;   //The price of item 3 in Dollars
    float item4=12.95;   //The price of item 4 in Dollars
    float item5=3.95;    //The price of item 5 in Dollars
    float percTax=0.07;  //Percentage of Tax
    float subTot;        //The Subtotal of the sale
    float amtTax;        //The Amount of sales tax
    float totAmt;        //The Total Amount
    
    
   //process the input
    subTot=item1+item2+item3+item4+item5;
    amtTax=subTot*percTax;
    totAmt=subTot+amtTax;
    
    
   //output results
    cout<<"The Subtotal of the sale is: $ "<<subTot<<endl;
    cout<<"The Amount of the sale tax are: $ "<<amtTax<<endl;
    cout<<"The Total Amount is: $ "<<totAmt<<endl;
    
    
   //exit stage right

    return 0;
}