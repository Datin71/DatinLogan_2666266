/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Safest Driving Area
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
    //Declare Variables
    
    char ans2;
    //Process to get results
   
    //Output
    cout<<"You need to heat up a frozen door lock that is submerged underwater to get someone out."<<endl;
    cout<<"Do you [T] heat with a torch or [F] heat with flare?"<<endl;
    cin>>ans2;
    ans2 =='F'||ans2=='f'? cout<<"The answer is correct"<<endl:cout<<"The answer is incorrect"<<endl;
    //Exit Program
    return 0;
}
