/* 
   File:   main
   Author: Logan Datin
   Created on October 21, 2016, 6:46 PM
   Purpose:  Calculate an employees gross pay
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
    float gross; //total pay
    float rate;  //rate per hour
    int hours;   //hours worked
    
    //Prompt user for inputs
    cout<<"Enter your pay rate per hour($$$.$$)"<<endl;
    cin>>rate;
    cout<<"Enter the amount of hours worked"<<endl;
    cin>>hours;
    
    //Calculate gross pay
    gross=(hours<=40)?rate*hours: //pay for hours worked at or under 40
          (hours>40&&hours<=50)?(rate*40)+(hours-40)*2*rate: //pay for hours worked over 40 but under/at 50
          (hours>50)?(rate*40)+(2*rate*10)+(hours-50)*3*rate:-1; //pay for hours worked over 50, else it is -1
   if(hours<=-1||rate<=-1){
        cout<<"Error. You need to stop working. You are not doing it right."<<endl;
    }
    
    //Display Output
    if (gross>=0&&hours>=0&&rate>=0){
    cout<<"You will make $"<<gross<<" for the "<<hours<<" hours worked"<<endl;
    cout<<gross<<endl;
    }

    //Exit Program
    return 0;
}