/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 05, 2016, 9:52 AM
 * Purpose:  Sort Numbers from highest to lowest - 3 variables
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
    int a, b , c;
    //Input or initialize values Here
    cout<<"Input whole numbers for a, b, and c"<<endl;
    cin>>a>>b>>c;
    //Process/Calculations and Output
    cout<<"The numbers rearranged from largest to smallest :"<<endl;
    if (a>=b&&b>=c)
        cout<<a<<"   "<<b<<"   "<<c<<endl;
    else if (a>=c&&c>=b)
        cout<<a<<"   "<<c<<"   "<<b<<endl;
    else if (b>=a&&a>=c)
        cout<<b<<"   "<<a<<"   "<<c<<endl;
    else if (b>=c&&c>=a)
        cout<<b<<"   "<<c<<"   "<<a<<endl;
    else if (c>=a&&a>=b)
        cout<<c<<"   "<<a<<"   "<<b<<endl;
    else if (c>=b&&b>=a)
        cout<<c<<"   "<<b<<"   "<<a<<endl;

    //Exit
    return 0;
}

