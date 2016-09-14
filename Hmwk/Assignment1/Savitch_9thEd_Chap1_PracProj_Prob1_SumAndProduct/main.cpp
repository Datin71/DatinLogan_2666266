/* 
   File:   main
   Author: Logan Datin
   Created on September 13, 2016, 5:47 PM
   Purpose:  Calculate and output the product and sum of two integers.
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
    int int1;   //user-defined integer
    int int2;   //user-defined integer
    int product;//product of the two integers
    int sum;    //sum of the two integers
    //Input values
    cout<<"Enter and integer"<<endl;    //ask the user to enter an integer
    cin>>int1;                          //user-defined integer
    cout<<"Enter another integer"<<endl;//ask the user to enter another integer
    cin>>int2;                          //user-defined integer
       
    //Process values -> Map inputs to Outputs
    product = int1 * int2;  //calculate the product of the two integers
    sum = int1 + int2;      //calculate the sum of the two integers
          
    //Display Output
    cout<<"Product of the two integers: "<<product<<endl;   //display the product of the two integers
    cout<<"Sum of the two integers: "<<sum<<endl;           //display the sum of the two integers
    //Exit Program
    return 0;
}