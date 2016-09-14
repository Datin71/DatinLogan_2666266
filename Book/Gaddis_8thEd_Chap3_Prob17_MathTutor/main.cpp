/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 14, 2016, 10:22 AM
 * Purpose:  Develop a math tutor to emphasize the random number generator
 */

//System Libraries Here
#include <iostream>  //Input/Output Objects
#include <cstdlib>   //random number seed
#include <ctime>     //Seed the random number generator
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned short op1,op2,result,user;
    //Input or initialize values Here
    op1=rand()%900+100; //3 digit random number
    op2=rand()%900+100; //3 digit random number
    //Process/Calculations Here
    result=op1+op2;
    //Output Located Here
    cout<<"Solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<" + "<<op2<<endl;
    cout<<"------"<<endl;

    //Exit
    return 0;
}

