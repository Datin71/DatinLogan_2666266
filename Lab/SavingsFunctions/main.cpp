/* 
 * File:   main.cpp
 * Author: Logan Datin  
 * Created on October 19, 2016, 10:04 AM
 * Purpose: All the ways to save
 */

//System Libraries Here
#include <iostream>
#include <cmath>    //power function, exponential, log as well
#include <iomanip>  //format Dollar output
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f;
//Function Prototypes Here
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv,intRate;
    int nComp;
    //Input values
    pv=100.0f;          //100 dollars
    intRate=8/PERCENT;  //8 percent
    nComp=9;             //9 years
    
    //Process/Calculations Here & Output Located Here
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Present Value    = $"<<pv<<endl;
            cout<<"Interest Rate    = "<<intRate*PERCENT<<"%/year"<<endl;
            cout<<"Years in Account = "<<nComp<<" Years"<<endl;
            cout<<"Future Value (Power)     =$"<<save1 (pv,intRate,nComp)<<endl;
            cout<<"Future Value (Exp,Log)   =$"<<save2 (pv,intRate,nComp)<<endl;
            cout<<"Future Value (For-Loop)  =$"<<save3 (pv,intRate,nComp)<<endl;
            cout<<"Future Value (Recursion) =$"<<save4 (pv,intRate,nComp)<<endl;
            
    
    

    //Exit
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72 here
//Inputs:   Inputs to functions here
//p->Initial balance in $'s
//i->Decimal value for interest/year
//n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n
//******************************************************************************

float save1(float p, float i, int n){
    return p*pow((i+1),n);
}
   


float save2(float p, float i, int n){
    return p*exp(n*log(1+i));
}

float save3(float p, float i, int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
        
    }
    return fv;
}
float save4(float p, float i, int n){
    if(n<=0)return p;{
    return save4(p,i,n-1)*(1+i);      
    }
    }
