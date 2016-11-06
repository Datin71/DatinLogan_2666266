/* 
   File:   main
   Author: Logan Datin
   Created on November 5, 2016, 5:21 PM
   Purpose:  Markup a wholesale price to retail price
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>      //Output formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void retail(float,int); //Calculate retail price
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float wholeV;   //wholesale value
    int markup;     //Markup percentage
    
    //Input values
    cout<<"Enter wholesale price"<<endl;
    cin>>wholeV;
    cout<<"Enter markup percentage"<<endl;
    cin>>markup;
    
    //Validate Input
    while(wholeV<0){
        cout<<"You must enter a positive value"<<endl;
        cin>>wholeV;
    }
           
    //Process values and output
    retail(wholeV,markup); //Call retail function
    cout<<"Wholesale Price: $"<<wholeV<<endl;
    cout<<"Markup: %"<<markup<<endl;
    //Display Output
   
    //Exit Program
    return 0;
}

void retail(float w, int m){
    //Declare Variables
    float r; //Retail price, wholesale price
    
    
    //Process
    r=w+((w*m)/100); //Calculate retail
    
    //Output Value
    cout<<fixed<<setprecision(2)<<showpoint<<"Retail Price: $"<<r<<endl;
}