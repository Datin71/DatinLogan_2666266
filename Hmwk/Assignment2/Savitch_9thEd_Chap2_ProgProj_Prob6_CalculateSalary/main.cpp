/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 7:46 PM
   Purpose:  Calculate Gross pay, withholding amount, and net take home pay 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float payRate, hrsWork; //Payrate, Hours worked;
    float overtime;                 //Hours worked that are overtime
    float gross, net;               //Gross pay in dollars, net pay in dollars
    float socialP=.06, fedP=.14, stateP=.05, unFees=10, ttlHold; //Social Security tax witheld - percentage, federal tax witheld - percentage, state tax witheld - percentage, union dues - dallars, total holding amount - dollars
    float socialT, fedT, stateT; //Total amount deducted from social, federal, and state tax
    unsigned short depend; //amount of dependents
    int dpndD; //Amount deducted for dependents
    
    //Input values
    cout<<"How much money do you make an hour?"<<endl;
    cin>>payRate;
    cout<<"How many hours did you work this week?"<<endl;
    cin>>hrsWork;
    cout<<"How many dependents do you have?"<<endl;
    cin>>depend;
    
    //Process values -> Map inputs to Outputs
    dpndD=(depend>=3)?35:0;  //If the amount of dependents is 3 or more, the amount deducted is 35 dollars, if not, it is 0
    if (hrsWork<=40)        //If 40 or less hours are worked, calculate gross pay
    {
    gross=payRate*hrsWork;
    }
    if (hrsWork>40)         //Calculate gross pay if the person worked overtime
    {
    overtime=hrsWork-40;
    gross=payRate*40+payRate*1.5*overtime;
    }
    socialT=gross*socialP; //Calculate Social Security witheld total
    fedT=gross*fedP;         //Calculate Federal witheld total
    stateT=gross*stateP;         //Calculate state withheld total
    ttlHold=socialT+fedT+stateT+unFees+dpndD; //Calculate total fees deducted
    
    net=gross-ttlHold; //calculate net pay
    
    
        
    //Display Output
    cout<<"Your Gross Pay: $"<<fixed<<setprecision(2)<<gross<<endl;
    cout<<"Your Net take home pay: $"<<fixed<<setprecision(2)<<net<<endl;
    cout<<"Your total deductions: $"<<fixed<<setprecision(2)<<ttlHold<<endl;
    cout<<"Your federal tax amount: $"<<fixed<<setprecision(2)<<fedT<<endl;
    cout<<"Your state tax amount: $"<<fixed<<setprecision(2)<<stateT<<endl;
    cout<<"Your social security tax amount: $"<<fixed<<setprecision(2)<<socialT<<endl;
    cout<<"Your dollars deducted for your number of dependents: $"<<fixed<<setprecision(2)<<dpndD<<endl;
    

    //Exit Program
    return 0;
}