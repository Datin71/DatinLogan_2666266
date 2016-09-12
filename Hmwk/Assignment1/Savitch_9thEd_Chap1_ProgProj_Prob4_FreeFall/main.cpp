/* 
 * File:   main
 * Author: Logan Datin
 * Created on September 12, 2016, 10:27 AM
 * Purpose:  Calculate Distance dropped in freefall
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=9.8; //Acceleration in meters per second squared

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time;//time as an input in seconds
    float disFell;  //Distance in free fall in meters
    int places; //Places to round the answer
    
    
    //Input or initialize values Here
    cout<<"This problem determines distance dropped in freefall"<<endl;
    cout<<"Input the time in freefall"<<endl;
    cin>>time;
    cout<<"How many decimal places to round the result"<<endl;
    cin>>places;
    //Process/Calculations Here
    disFell=GRAVITY*time*time/2;
    float shift=pow(10,places);
    int round1=disFell*shift+0.5;
    disFell=round1/shift;
    
    //Output Located Here
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fallen = "<<time<<" seconds"<<endl;
    cout<<"Distance Traveled = "<<disFell<<" Meters"<<endl;
    

    //Exit
    return 0;
}

