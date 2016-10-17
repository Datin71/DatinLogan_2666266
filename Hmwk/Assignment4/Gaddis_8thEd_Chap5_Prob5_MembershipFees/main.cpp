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
    int cost=2500; //The price in dollars of the membership
    int year=1;       //Initial year equals 0
    int incAmt;       //The amount that is being added to the fee
    
    //Input or initialize values Here
    
    //Process/Calculations/Display Here
    for(int i=year;i<7;i++){   //calculate the membership fees for different years 
        incAmt=(cost*incRate)/100;
        cost=incAmt+cost;
        cout<<"New cost of Annual Membership for year "<<year<<" : $"<<cost<<endl;
        year++;
    }
    //Exit
    return 0;
}

