/* 
 * File:   main.cpp
 * Author: Edana Gonzalez 
 * Created on June 20, 2017, 1:35PM
 * Purpose:  Gas Tax
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
    //Declare all Variables Here
    float ppGal=2.75f;//$2.75/gallon for Regular
    float taxGal=0.764f;//76.4 cents per gallon
    float nGal=15;//Number of Gallons for a fill-up
    float totAmt;//Total Amount tendered or purchase price in $'s
    float totTax;//Total tax paid to fill up
    float prcTax;//Percentage taxed on purchase
    
    //Map Input to outputs or process the data
    totAmt=nGal*ppGal;
    totTax=taxGal*nGal;
    prcTax=totTax/totAmt*100;
    
    
    //Output the tranformed data
    cout<<"Number of gallons for a fill up = "<<nGal<<endl;
    cout<<"Price per Gallons paid = $ "<<ppGal<<endl;
    cout<<"Tax Composition = 18.4 cents Fed, 36 cents State"<<endl;
    cout<<"and 8% sales Tax"<<endl;
    cout<<"Total Amount paid to fill-up = $"<<totAmt<<endl;
    cout<<"Total Taxes paid to fill-up = $"<<totTax
            <<endl;
    cout<<"Percentage Tax paid = "<<prcTax<<"%"<<endl;

    //Exit
    return 0;
}

