/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 17, 2016, 8:43 AM
 * Purpose:  Calculate membership costs for the next 6 years
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
    int incRate=4;    //The rate in percentage that the country club will increase its price annually
    int charge=2500; //The initial price in dollars of the membership
    int year=1;       //Initial year equals 0
    int cost;         //The updated cost of the membership
    int incAmt;       //The amount that is being added to the fee
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    for(int i=year;i<7;i++){
        incAmt=(charge*incRate)/100;
        cost=incAmt+charge
        cout<<"New cost of Annual Membership for year "<<year<<" : $"<<cost<<endl;
        year++;
    }
    //Output Located Here
  

    //Exit
    return 0;
}

