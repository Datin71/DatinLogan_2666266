/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 12, 2016, 10:13 AM
 * Purpose:  Find sum of numbers up to a user described positive integer
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
    int minNum=1; //Starting number
    int maxNum; //User defined positive integer value
    int sum; //The sum of all the integers up to the number that was input
    //Prompt user for integer
    cout<<"Enter a positive integer"<<endl;
    cin>>maxNum;
    
    //Validate the input
    while (maxNum<0){
        cout<<"You must enter a positive integer"<<endl;
        cin>>maxNum;
    }
   
    //Process/Calculations Here
    for (int i=minNum;i<=maxNum;i++){  //i is equal to 1, is i less/equal to that max number? if so, do the process, then add 1. Find out if true. repeat until true
        sum=sum+i; //The sum is equal to itself plus i
        
    }
    
    //Output Located Here
    cout<<"You entered : "<<maxNum<<endl;
    cout<<"The sum of all of the integers up to your number is: "<<sum<<endl;
    

    //Exit
    return 0;
}

