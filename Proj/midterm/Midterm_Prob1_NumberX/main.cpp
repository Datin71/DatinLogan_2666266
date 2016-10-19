/* 
   File:   main
   Author: Logan Datin
   Created on October 18, 2016, 4:38 PM
   Purpose: Output an X in a certain fashion when a user inputs a number 
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
    //Declaration of Variables
    int num; //The number the user inputs
    float space; //The space in between the characters
    
    //Prompt for input
    cout<<"Please input an integer from 1-50"<<endl;
    cin>>num;
    
    //Validate input
    while(num<1||num>50){
        cout<<"Error: You must enter a number 1-50"<<endl;
        cin>>num;
    }
    //Rare instance that they enter 1 - process
    if(num==1){
        cout<<num<<endl;
    }
 
    //Process for odd number
        if(num%2!=0&&num!=1){ //if number is odd and not equal to one
        cout<<setw(20)<<num<<setw(num-1)<<num<<endl; //output first line
        for(int i=2;i+1<num;i++){  //loop for the 2nd line up to the middle number
            num--;
            cout<<setw(i+19)<<num<<setw(num-i)<<num<<endl;
        }

        cout<<setw(num-1+19)<<num-1<<endl; //middle number

        for(int i=1;num>2;i++){
            num--;
            cout<<setw(num+18)<<num-1<<setw(i*2)<<num-1<<endl;
        }

        }
    
    //process for even number
    if(num%2==0) {
        cout<<"even!"<<endl;
    }
    
    
    //Display Output
    cout<<num<<endl;

    //Exit Program
    return 0;
}