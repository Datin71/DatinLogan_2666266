/* 
   File:   main
   Author: Logan Datin
   Created on October 21, 2016, 9:38 PM
   Purpose:  Calculate the sum of a sequence
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
    int x;          //input number for equation
    int n;          //the number of terms
    float sum1=0;   //first result of the sequence
    float sum;      //final result
    int y=0;        //alternate sign working variable
    int z=0;        //Exponent number on sequence and factorial
    
    //Prompt for inputs
    cout<<"This program will output the sum of 1 - (x^2)/2! + (x^4)/4! -(x^6)/6! + .........."<<endl;
    cout<<"where x is the number you input and n is the number of terms"<<endl;
    cout<<"input a number(x)"<<endl;
    cin>>x;
    cout<<"Input the number of terms"<<endl;
    cin>>n;            
    
    //Process sequence
    for(int i=0;i<n;i++){                           //repeat n number of times
        z+=2;                                       //add 2 to z
        y=(i%2==0)?-1:1;                            //Make sign alternate by changing y from +1 to -1
        sum1=y*((pow(x,(z)))/factorial(z))+sum1;    //sum is equal to previous sum + the new sequence
        
    }
    sum=sum1+1; //add one to sum1
    
    //Display output
    cout<<"The total sum of the sequence is "<<sum<<endl;

    //Exit Program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   factorial funtion*********************************
//Purpose:  take a number and return factorial
//Inputs:   integer from program
//Output:   factorial of integer that was input
//******************************************************************************
int factorial(int f){
  return (f==1||f==0)?1:factorial(f-1)*f;
}