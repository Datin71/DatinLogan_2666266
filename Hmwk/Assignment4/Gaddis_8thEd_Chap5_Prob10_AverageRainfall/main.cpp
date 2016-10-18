/* 
   File:   main
   Author: Logan Datin
   Created on October 17, 2016, 7:38 PM
   Purpose:  Determine average rainfall
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
    int years; //number of years
    int rain1; //rainfall for a month
    float totRain; //total rainfall
    float aveRain;  //number of rooms per floor
    int totRoom=0; //Total amount of rooms
    int occTot=0; //Total number of occupied rooms
    float prcntO; //Percentage of rooms that are occupied
    
    //Prompt for how many years
    cout<<"Enter number of years of rainfall"<<endl;
    cin>>years;
    
    //validate input
    while(years<1){
        cout<<"Error: number of years invalid"<<endl;
        cout<<"Enter the number of years you want an average of."<<endl;
        cin>>years;
    }
    
    //Loop to determine each year's average
    for(int i=1;i<=(years*12);i++){
        cout<<"Enter rainfall in inches for month "<<i<<endl;
        cin>>rain1;
        while (rain1<0){     //Validate rainfall input
            cout<<"Error: You cant have negative rainfall"<<endl;
            cin>>rain1;
        }
        //Calculate total rain fall
        totRain=totRain+rain1;


    }
    
    //Calculate average rainfall per month
    aveRain=totRain/(years*12);
    
    //Display Output
    cout<<"Total Rainfall: "<<totRain<<" inches"<<endl;
    cout<<"Number of Months: "<<years*12<<endl;
    cout<<"Average Rainfall per Month: "<<aveRain<<" inches"<<endl;

    //Exit Program
    return 0;
}