/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 19, 2017, 6:35 PM
 * Purpose:  Find the square root of a number without using cmath
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float n;      //User entered value
    float s;      //The square root of n
    float g=1.0001;  //The initial guess that it will divide by  
    int count=1000;  //How many calculations to perform
 
    
    //Request Input
    cout<<"Enter a positive number n"<<endl;
    cin>>n;
    
    //Validate the input
    while(n<=0){
        cout<<"Error: Enter a number greater than 0"<<endl;
        cin>>n;
    }    

    //Process the data to find the square root
    s=n/g;      //square root=number divided by guess to start process
    g=(g+s)/2;  //step of babylonian method
    
    while(count>0){
    s=n/g;  //set the square within while loop  
    g=(g+s)/2;  //set g within while loop

        if(g<=(g*0.01)+g){  //babylonian method
        s=g;
        }
        else{
        s = n/g;
        g = (g + s)/2;
        }
    count-=1;
    }
    
    
    //Output the data
     cout<<"Square root of "<<n<<" = "<<s<<endl;
     cout<<"error: "<<n-s*s<<endl;

   
       
    

    //Exit
    return 0;
}