/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 05, 2016, 9:52 AM
 * Purpose:  Sort Numbers from highest to lowest - 2 variables
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
    int a, b;
    //Input or initialize values Here
    cout<<"Input whole numbers for a and b"<<endl;
    cin>>a>>b;
    //Process/Calculations Here
    (a>=b)? cout<<a<<"  "<<b:cout<<b<<"  "<<a<<endl;
    //Output Located Here

    //Exit
    return 0;
}

