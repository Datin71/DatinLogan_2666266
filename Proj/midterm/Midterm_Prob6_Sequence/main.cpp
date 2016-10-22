/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //For power function
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
    int sum1=0;    //first result of the sequence
    int y=0;      //alternate sign working variable
    int z=0;     //Exponent number on sequence
    
    //Prompt for inputs
    cout<<"This program will output the sum of 1 - (x^2)/2! + (x^4)/4! -(x^6)/6! + .........."<<endl;
    cout<<"where x is the number you input and n is the number of terms"<<endl;
    cout<<"input a number"<<endl;
    cin>>x;
    cout<<"Input the number of terms"<<endl;
    cin>>n;            
    
    //Process 
    for(int i=0;i<n;i++){
        cout<<"before"<<endl;
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
        cout<<"sum: "<<sum1<<endl;
        
        y=(i%2==0)?-1:1; //Make sign alternate by changing y from +1 to -1
        sum1=y*(pow(x,(z+2)))+sum1; //sum is equal to previous sum + the new sequence
        z+=2;
        
        
        cout<<"after"<<endl;
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
        cout<<"sum: "<<sum1<<endl;
    }
    
    //cout<<sum<<endl;
    //cout<<x<<endl;
    //cout<<y<<endl;
    //for(int i=0;i<n;i++){  }
        
    

    //Exit Program
    return 0;
}



int factorial(int x){
    
}