/* 
   File:   main
   Author: Logan Datin
   Created on October 21th, 8:08 PM
   Purpose:  Menu with Functions for Midterm 48101
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>      //Formatting control
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1(NumberX)"<<endl;
        cout<<"2.  Type 2  for Problem 2(4CharNumber)"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Create an X with any number 1-50
//Inputs:   numbers 1-50
//Output:   Outputs an array that looks like an X
//******************************************************************************
void problem1(){
    //Declaration of Variables
    int num; //The number the user inputs
    float space; //The space in between the characters
    int one=1; //variable used to process an even number. equal to 1
    
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
    else if(num%2==0) {
        cout<<setw(20)<<one<<setw(num-1)<<one<<endl;
        for(int i=2;one<num/2;i++){  //loop for the 2nd line up to the middle number
            one++;
            if (one<10){
            cout<<setw(i+19)<<one<<setw(num-i*2+1)<<one<<endl;
            }
            if (one>=10) {
            cout<<setw(i+19)<<one<<setw(num-i*2+2)<<one<<endl;    
            }
            
        }
        for(int i=1;one<num;i++){  //loop for the middle down
            one++;
            if (one<10){
            cout<<setw(one+20-2*i)<<one<<setw(i*2-1)<<one<<endl;
            }
            if (one>=10) {
                cout<<setw(one+20-2*i)<<one<<setw(i*2)<<one<<endl;
            }
        }
    }
    //Exit Program
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 2 ****************************************
//Purpose:  Read out a number with asterisks
//Inputs:   4 character number
//Output:   Outputs a number with asterisks that correlate to the number
//******************************************************************************
void problem2(){
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
}

void problem3(){
    cout<<"Inside Problem C"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem4(){
    cout<<"Inside Problem D"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem5(){
    cout<<"Inside Problem E"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem6(){
    cout<<"Inside Problem F"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}
