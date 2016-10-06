/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 3, 2016, 8:50 AM
 * Purpose:  Algebra Quadratic Solution
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float a,b,c;  //variables
    //Input or initialize values Here
    cout<<"Solution to Quadratic ax^2+bx+c=0"<<endl;
    cout<<"Input 3 float data types a b c"<<endl;
    cin>>a>>b>>c;
    //Process/Calculations Here
    float vb4sqrt=b*b-4*a*c;  //Calculate the top of the quadratic equation
    if (a==0){    //If a is zero, that makes the quadratic equation invalid
        if(b==0){  //This is not an expression
            cout<<"This is not an algebraic equation"<<endl;
        }else{
             cout<<"The solution is x = "<<-c/b<<endl; 
        }
    }else if(vb4sqrt>0){
        cout<<"x = ("<<((-b+sqrt(vb4sqrt))/(2*a))<<" , "
                     <<((-b-sqrt(vb4sqrt))/(2*a))<<")"<<endl;
    }else{
        cout<<"x = ("<<(-b/(2*a))<<"+"<<((sqrt(-vb4sqrt))/(2*a))<<"i, "
                     <<(-b/(2*a))<<"+"<<((-sqrt(-vb4sqrt))/(2*a))<<"i)"<<endl;   
    }
    //Exit
    return 0;
}

