/* 
   File:   main
   Author: Logan Datin
   Created on October 19, 2016, 4:35 PM
   Purpose:  read out a number with asterisks
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
    int num; //number the user inputs
    int num3; //number of thousands
    int num2; //number of hundreds
    int num1; //number of tens
    int num0; //number of ones
    
    //User inputs
    cout<<"Please enter a 4 character number."<<endl;
    cin>>num;
    
    //Validate input
    while (num>9999||num<0){
        cout<<"Error: please enter only a four digit number"<<endl;
        cin>>num;
    }
    
    //Determine numbers for each place, 1000's, 100's, 10's, & 1's
    num3=num/1000;
    num2=(num-num3*1000)/100;
    num1=(num-num3*1000-num2*100)/10;
    num0=(num-num3*1000-num2*100-num1*10);
   
    
    //output 1's place asterisks
    cout<<num0<<" ";
    for(int i=0;i<num0;i++){
        cout<<"*";
    }cout<<endl;
    
    //output 10's place asterisks
    cout<<num1<<" ";
    for(int i=0;i<num1;i++){
        cout<<"*";
    }cout<<endl;
         
    //output 100's place asterisks
    cout<<num2<<" ";
    for(int i=0;i<num2;i++){
        cout<<"*";
    }cout<<endl;
    
    //output 1000's place asterisks
    cout<<num3<<" ";
    for(int i=0;i<num3;i++){
        cout<<"*";
    }cout<<endl;
    
    
    //Exit Program
    return 0;
}