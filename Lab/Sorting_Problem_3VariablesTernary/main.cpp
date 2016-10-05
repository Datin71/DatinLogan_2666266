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
    int a, b, c;
    //Input or initialize values Here
    cout<<"Input whole numbers for a, b, and c"<<endl;
    cin>>a>>b>>c;
    //Process/Calculations Here
    cout<<"The numbers from largest to smallest are"<<endl;
    (a>=b&&b>=c)? cout<<a<<"  "<<b<<"  "<<c:
    (a>=c&&c>=b)? cout<<a<<"  "<<c<<"  "<<b:
    (b>=a&&a>=c)? cout<<b<<"  "<<a<<"  "<<c:
    (b>=c&&c>=a)? cout<<b<<"  "<<c<<"  "<<a:
    (c>=b&&b>=a)? cout<<c<<"  "<<b<<"  "<<a:cout<<c<<"  "<<a<<"  "<<b;
    
    //Output Located Here

    //Exit
    return 0;
}

