/* 
   File:   main
   Author: Logan Datin
   Created on October 6,2017
   Purpose:  Determine cost to ship product
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
    float w, d, c;   //w=weight  d=distance  c=cost
    
    //Prompt user for weight
    cout<<"Weight of package in kg.(max=25kg)"<<endl;
    cin>>w;
            
    //validate
    while(w<0||w>25){
        cout<<"Error: Enter a number between 0 and 25 kg"<<endl;
        cin>>w;
    }
    
    //Prompt user for distance
    cout<<"Distance to ship in miles(min=5 miles, max=3500 miles)"<<endl;
    cin>>d;
    
    //validate
    while(d<5||d>3500){
        cout<<"Error: Enter a number between 5 and 3500"<<endl;
        cin>>d;
    }
    
    //Process values
    if (w<=3)
    {c=(d/750)*1.25;
        cout<<"The shipping charge is $"<<setprecision(2)<<fixed<<c<<endl;
    }
    
    if (w>3&&w<=7)
    {c=2.35+(d/750)*2.35;
        cout<<"The shipping charge is $"<<setprecision(2)<<fixed<<c<<endl;
    }
    
    if (w>7&&w<=12)
    {c=3.75+(d/750)*3.75;
        cout<<"The shipping charge is $"<<setprecision(2)<<fixed<<c<<endl;
    }
    
    if (w>12&&w<=25)
    {c=(d/750)*4.90;
        cout<<"The shipping charge is $"<<setprecision(2)<<fixed<<c<<endl;
    }

    //Display Output
    

    //Exit Program
    return 0;
}