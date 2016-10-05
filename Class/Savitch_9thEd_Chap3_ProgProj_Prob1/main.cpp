/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 1:06 PM
   Purpose:  Calculate the cost of a phone bill
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
    char day1, day2;  //The first and second letter of the day of the week
    int min, start;   //Length of call, Start time 
    float cost;       //Cost of call
    
    //Input values
    cout<<"Please enter the first two letters of the day of the week that the call was started."<<endl;
    cin>>day1>>day2;
    cout<<"Please enter the time that the call was started in 24 hour format without a colon."<<endl;
    cin>>start;
    cout<<"Please enter the length of the call in minutes."<<endl;
    cin>>min;
    
    //Process values -> Map inputs to Outputs
    if (start>2400)
    {
        cout<<"Incorrect time format"<<endl;
        return 1;
    }
    
    if ((day1=='M')||(day1=='m')&&(day2=='O')||(day2=='o'))   //Calculate if enter monday
    {
        if ((start>=800)&&(start<=1800))                      //Calculate if enter time between 800 and 1800
        {
            cost=.4*min;                                      //Calculate cost if true
        }
        else 
        {    
            cost=.25*min;                                     //Calculate cost if false
        }
                
    }
    
    if ((day1=='T')||(day1=='t')&&(day2=='u')||(day2=='U'))   //Calculate if enter Tuesday
    {
        if ((start>=800)&&(start<=1800))                      //Calculate if enter time between 800 and 1800
        {
            cost=.4*min;                                      //Calculate cost if true
            cout<<"The cost of the phone call is $"<<fixed<<setprecision(2)<<cost<<endl;
            return 0;
        }
        else 
        {    
            cost=.25*min;                                     //Calculate cost if false
            cout<<"The cost of the phone call is $"<<fixed<<setprecision(2)<<cost<<endl;
            return 0;
        }
    }
    
    if ((day1=='W')||(day1=='w')&&(day2=='E')||(day2=='e'))   //Calculate if enter wednesday
    {
        if ((start>=800)&&(start<=1800))                      //Calculate if enter time between 800 and 1800
        {
            cost=.4*min;                                      //Calculate cost if true
        }
        else 
        {    
            cost=.25*min;                                     //Calculate cost if false
        }
                
    }
    if ((day1=='T')||(day1=='t')&&(day2=='H')||(day2=='h'))   //Calculate if enter Thursday
    {
        if ((start>=800)&&(start<=1800))                      //Calculate if enter time between 800 and 1800
        {
            cost=.4*min;                                      //Calculate cost if true
        }
        else 
        {    
            cost=.25*min;                                     //Calculate cost if false
        }
                
    }
    
    if ((day1=='F')||(day1=='f')&&(day2=='R')||(day2=='r'))   //Calculate if enter Friday
    {
        if ((start>=800)&&(start<=1800))                      //Calculate if enter time between 800 and 1800
        {
            cost=.4*min;                                      //Calculate cost if true
        }
        else 
        {    
            cost=.25*min;                                     //Calculate cost if false
        }
                
    }
    
    if ((day1=='S')||(day1=='s')&&(day2=='A')||(day2=='a'))   //Calculate if enter Saturday
    {
        cost=.15*min;                                         //Calculate cost
                
    }
    
    if ((day1=='S')||(day1=='s')&&(day2=='U')||(day2=='u'))   //Calculate if enter Sunday
    {
        cost=.15*min;                                         //Calculate cost
                
    }
          
    //Display Output
    cout<<"The cost of the phone call is $"<<fixed<<setprecision(2)<<cost<<endl;

    //Exit Program
    return 0;
}