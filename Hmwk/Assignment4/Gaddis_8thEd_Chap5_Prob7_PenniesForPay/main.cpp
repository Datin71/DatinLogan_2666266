/* 
   File:   main
   Author: Logan Datin
   Created on October 17, 2016, 5:23 PM
   Purpose:  Calculate pennies paid out over a certain amount of days
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
    int days; //How many days will we be looking at for evaluating
    int first; //First day of pay
    float salary=1; //Salary 
    float output;  //salary that is shown
    
    //prompt user for inputs
    cout<<"This program shows you earned income if you start with a one-"<<endl;
    cout<<"-penny salary and double it every day"<<endl;
    cout<<"Enter the amount of days(1-31)"<<endl;
    cin>>days;
    
    
    //Validate input
    while(days<1||days>31){
        cout<<"Error: Enter a number between 1 and 31"<<endl;
        cin>>days;
    }
        //Output salary table    
        if (days==1){
            salary=1;
        }else
            cout<<"Day"<<"     "<<"Pay"<<endl;
        cout<<"1       $0.01"<<endl;
            for(int i=2;i<=days;i++){
                salary=salary*2;
                output=salary/100;
                cout<<i<<"       $"<<fixed<<setprecision(2)<<output<<endl;
            }
    

    //Exit Program
    return 0;
}