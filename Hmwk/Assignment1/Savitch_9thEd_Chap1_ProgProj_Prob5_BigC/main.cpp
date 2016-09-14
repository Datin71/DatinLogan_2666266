/* 
   File:   main
   Author: Logan Datin
   Created on September 13, 2016, 6:55 PM
   Purpose:  Create a large "C" graphic made of a user defined character
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
    char s=' ';//The space character
    char c;    //Character used to create the Big C
    
    //Input values
    cout<<"What character would you like to use to make a Big C?"<<endl; //prompt user for which character to use to make a big C
    cin>>c; //user defined character
    
    //Process values -> Map inputs to Outputs
    
    //Display Output -> The Big C
    cout<<s<<s<<c<<c<<c<<endl; //output the big C
    cout<<s<<c<<s<<s<<c<<endl; //output the big C
    cout<<c<<s<<s<<s<<s<<endl; //output the big C
    cout<<c<<s<<s<<s<<s<<endl; //output the big C
    cout<<c<<s<<s<<s<<s<<endl; //output the big C
    cout<<c<<s<<s<<s<<s<<endl; //output the big C
    cout<<c<<s<<s<<s<<s<<endl; //output the big C
    cout<<s<<c<<s<<s<<c<<endl; //output the big C
    cout<<s<<s<<c<<c<<c<<endl; //output the big C

    //Exit Program
    return 0;
}