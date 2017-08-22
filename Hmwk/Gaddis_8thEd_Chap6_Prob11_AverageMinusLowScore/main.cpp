/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 31, 2016, 9:07 AM
 * Purpose:  Find average of 5 numbers minus the lowest number
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void getScr(int&,int&,int&,int&,int&);
float avgM1(int,int,int,int,int);
int getMin(int,int,int,int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int s1,s2,s3,s4,s5; //5 scores
    float avg; //average minus 1 score
    //Input or initialize values Here
    getScr(s1,s2,s3,s4,s5);
    //Process/Calculations Here
    avg=avgM1(s1,s2,s3,s4,s5);
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Average minus lowest score "<<avg<<endl;
    cout<<"You Suck!"<<endl;
    //Exit
    return 0;
}

int getMin(int s1,int s2,int s3,int s4,int s5){
    int min=s1;
    if (min>s2)min=s2;
    if (min>s3)min=s3;
    if (min>s4)min=s4;
    if (min>s5)min=s5;
    return min;
    
}

float avgM1(int s1,int s2,int s3,int s4,int s5){
    return 0.25*(s1+s2+s3+s4+s5-getMin(s1,s2,s3,s4,s5));
    }

void getScr(int&s1,int&s2,int&s3,int&s4,int&s5){
    //Get data and determine if valid for each score
    int x;
    do{
        cout<<"input a score between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s1=x;
    do{
        cout<<"input a score between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s2=x;
    do{
        cout<<"input a score between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s3=x;
    do{
        cout<<"input a score between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s4=x;
    do{
        cout<<"input a score between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s5=x;
}

