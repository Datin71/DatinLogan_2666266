/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int factorial(int x);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int x;      //input number for equation
    int n;      //the number of terms
    int sum;    //result of the sequence
    int y=2;      //the power and factorial number
    
    //Prompt for inputs
    cout<<"This program will output the sum of 1 - (x^2)/2! + (x^4)/4! -(x^6)/6! + .........."<<endl;
    cout<<"where x is the number you input and n is the number of terms"<<endl;
    cout<<"input a number"<<endl;
    cin>>x;
    cout<<"Input the number of terms"<<endl;
    cin>>n;            
    
    //
    for(int i=0;i==n;i++){
        
    }

    //Exit Program
    return 0;
}



int factorial(int x){
    
}