/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 3:48 PM
   Purpose:  Determine is a date is "Magic"
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
    int day, month, year; //user input variables
    //Input values
    cout<<"Choose a date"<<endl; //Prompt user to input variables
    cout<<"Enter the last two digits of the year of that date"<<endl;
    cin>>year;
    cout<<"Now enter the month of that date numerically"<<endl;
    cin>>month;
    cout<<"Now enter the day of that date"<<endl;
    cin>>day;
    
    //Process values -> Map inputs to Outputs
    if ((year>99)||(month>12)||(day>31))  //filter inputs that are not valid
    {
        cout<<"Wrong input!"<<endl;
        return 1;
    }
    (month*day==year)?cout<<"Magic Date!"<<endl:cout<<"The date is not magic"<<endl; //determine if the date is magic
    
    //Exit Program
    return 0;
}