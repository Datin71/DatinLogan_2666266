/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  Calculate Calories burned at certain durations
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
    float cpm=3.6; //calories per minute burned on a treadmill
    float burned;  //calories burned
    int counter=1;
    
    //Process values and Output
    while (counter<7){
        burned=cpm*counter*5; //calculate the amount of calories burned after so many minutes
        cout<<"calories burned: "<<burned<<"     minutes elapsed:  "<<counter*5<<endl;
        counter++;
    }

    //Exit Program
    return 0;
}