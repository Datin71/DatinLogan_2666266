/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Safest Driving Area
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <cmath>        //power function
#include <iomanip>      //Output format for dollars
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float future(float,float,float);  //Determines future value

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float f;    //future value
    float p;    //present value
    float i;    //monthly interest rate 
    float t;      //number of months
    
    //Input values
    cout<<"Enter the present value of the account"<<endl;
    cin>>p;
    cout<<"Enter the monthly interest rate"<<endl;
    cin>>i;
    cout<<"Enter the number of months the money will be in the account"<<endl;
    cin>>t;
        
    //Process
    f=future(p,i,t);
    
    //Output
    cout<<"Future Value: $"<<fixed<<setprecision(2)<<showpoint<<f<<endl;
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Calculate Future Value      *************************
//Purpose:  Determine future value in account
//Inputs:   present value, interest rate, number of months
//Output:   future value
//******************************************************************************

float future(float p,float i,float t){
    //Declare Variables
    float f; //future value
    
    //Process
    f=pow((1+i),t)*p;
    
    //output
    return f;
}
