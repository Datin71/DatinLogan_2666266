/* 
 * File:   main
 * Author: Logan Datin
 * Created on September 10, 2016, 7:46 PM
 * Purpose:  Determine the distance traveled when dropped
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITYm=9.8; //Acceleration in meters per second squared
const float GRAVITYs=32;  //Acceleration in feet per second squared

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time;    //time as an input in seconds
    float dsFllm;  //Distance fallen in meters
    float dsFlls;  //Distance  fallen in feet
    
    
    
    //Input or initialize values Here
    cout<<"This problem determines distance dropped in freefall"<<endl;
    cout<<"Input the time in freefall"<<endl;
    cin>>time;
    
    //Process/Calculations Here
    dsFllm=GRAVITYm*time*time/2;
    dsFlls=GRAVITYs*time*time/2;
    
    //Output Located Here
    cout<<"Gravity Standard = "<<GRAVITYs<<" ft/sec^2"<<endl;
    cout<<"Gravity Metric = "<<GRAVITYm<<" m/sec^2"<<endl;
    cout<<"Time fallen = "<<time<<" seconds"<<endl;
    cout<<"Distance Traveled = "<<dsFlls<<" Feet"<<endl;
    cout<<"Distance Traveled = "<<dsFllm<<" Meters"<<endl;
    

    //Exit
    return 0;
}

