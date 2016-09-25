/* 
   File:   main
   Author: Logan Datin
   Created on September 24, 2016, 7:27 PM
   Purpose: Calculate face value and monthly payment of a consumer loan 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float intR;  //Interest rate per year in percentage
    float amt;  //Amount of money the consumer needs
    float dur;  //Duration of the loan in months
    float ifV;  //Initial Face value of the loan
    float mP;   //Monthly Payment
    float yone,ytwo,ythree,yfour,yfive,ysix;   //yield 1, 2, 3, 4, 5, 6
    float fV, ffV;    //Face Value
  
    //Input values
    cout<<"Hello, we are going to figure out how big your loan will be after interest. "<<endl;
    cout<<"First enter the amount of money you need in dollars."<<endl;
    cin>>amt;
    cout<<"Now enter your interest rate per year for the loan."<<endl;
    cin>>intR;
    cout<<"Great, now what will the duration of the loan be in months?"<<endl;
    cin>>dur;
   
    //Process values -> Map inputs to Outputs
    yone=amt*(intR*.01)*(dur/12);
    ifV=yone+amt;
    ytwo=ifV*(dur/12)*(intR*.01);
    if (ytwo+amt!=ifV)
    {
    ythree=ifV*(intR*.01)*(dur/12);
    fV=ythree+amt;
    yfour=fV*(dur/12)*(intR*.01);  
    }
    else (cout<<"weee");
    
    if (yfour+amt!=fV)
    {
    yfive=fV*(intR*.01)*(dur/12);
    ffV=yfive+amt;
    ysix=ffV*(dur/12)*(intR*.01);  
    }
    else (cout<<"weee");
    //Display Output
    cout<<"yeild1: "<<yone<<endl;
    cout<<"Yield2: "<<ytwo<<endl;
    cout<<"yeild3: "<<ythree<<endl;
    cout<<"Yield4: "<<yfour<<endl;
    cout<<"yeild5: "<<yfive<<endl;
    cout<<"Yield6: "<<ysix<<endl;
    cout<<"initial FaceValue: "<<ifV<<endl;
    cout<<"FaceValue: "<<fV<<endl;
    cout<<"Final face Value: "<<ffV<<endl;
    //Exit Program
    return 0;
}