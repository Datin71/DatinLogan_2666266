/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 19, 2017, 7:46 PM
 * Purpose:  Calculate Final Course Grade for  user
 */

//System Libraries Here
#include <iostream>
#include <iomanip>  //output formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float assignment,quiz,discussion,finalExam,grade;   //variables
    
    //prompt user for values  
    cout<<"(Note: enter percentages in the format of xx.xx, for example 88.75%"<<endl;
    cout<<"would be entered as 88.75 - do not include the % symbol"<<endl;
    cout<<""<<endl;
    cout<<"Enter total assignment percentage"<<endl;
    cin>>assignment;
    cout<<"Enter total quiz percentage"<<endl;
    cin>>quiz;
    cout<<"Enter total discussion board percentage"<<endl;
    cin>>discussion;
    cout<<"Enter final exam percentage"<<endl;
    cin>>finalExam;
    
    //Process the data
    grade=discussion*.1+assignment*.4+quiz*.2+finalExam*.3;

    //Output the data
    cout<<"Final  Grade Percentage: "<<grade<<endl;
    //Exit
    return 0;
}

