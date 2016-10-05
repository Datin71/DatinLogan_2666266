/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 05, 2016, 9:52 AM
 * Purpose:  Sort Numbers from highest to lowest - 4 variables
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
    int a, b, c, d, max, min, mid1, mid2;
    //Input or initialize values Here
    cout<<"Input whole numbers for a, b, c, and d"<<endl;
    cin>>a>>b>>c;
    //Process/Calculations Here
    cout<<"The numbers from largest to smallest are: "<<endl;
    (a>=b&&b>=c&&c>=d)? max=a:max=b;  //testing code theory, not complete
    
    cout<<max<<mid1<<mid2<<min<<endl;
    
    

    //Exit
    return 0;
}

