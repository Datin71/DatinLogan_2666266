/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 28, 2017, 3:09 AM
 * Purpose:  Calculate Final Course Grade for  user
 */

//System Libraries Here
#include <iostream>
#include <iomanip>  //output formatting
#include <cmath>    //for the power function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   amt,   //amount total in savings
            prnpl, //the initial amount invested
            intRate,//interest rate
            intAmt, //interest amount
            cmpd; //number of times compounded per year
    
    //prompt user for values  
    cout<<"Enter the principal amount"<<endl;
    cin>>prnpl;
    cout<<"Enter the interest rate without using the percent symbol; ie. 4.25% enter 4.25"<<endl;
    cin>>intRate;
    cout<<"How many times is the interest is compounded per year"<<endl;
    cin>>cmpd;
    
    //Process the data
    amt=prnpl*(pow((1+((intRate*.01)/cmpd)),cmpd));
    intAmt=amt-prnpl;

    //Output the data
    cout<<"Principal:          $ "<<setprecision(2)<<fixed<<prnpl<<endl;
    cout<<"Interest Rate:          "<<setprecision(2)<<fixed<<intRate<<"%"<<endl;
    cout<<"Times Compounded:       "<<cmpd<<endl;
    cout<<"Interest:           $   "<<setprecision(2)<<fixed<<intAmt<<endl;
    cout<<"Amount in Savings:  $ "<<setprecision(2)<<fixed<<amt<<endl;
    //Exit
    return 0;
}

