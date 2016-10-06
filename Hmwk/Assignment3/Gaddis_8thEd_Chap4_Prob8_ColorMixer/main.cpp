/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  Determine the color output of combining two primary colors
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
    string color1, color2; 
    string red="red", blue="blue", yellow="yellow";
    
    //Determine inputs from user
    cout<<"Enter a primary color in lowercase(red, blue, or yellow)"<<endl;
    cin>>color1;
    cout<<"Enter a different primary color"<<endl;
    cin>>color2;
    //Process values -> Map inputs to Outputs ->Output
    if ((color1=="red")||(color1=="blue")||(color1=="yellow"))
        if (((color1=="red")&&(color2=="blue"))||((color2=="red")&&(color1=="blue")))
        {
            cout<<"The mix is purple!"<<endl;
        }
        if (((color1=="blue")&&(color2=="yellow"))||((color2=="blue")&&(color1=="yellow")))
        {
            cout<<"The mix is green!"<<endl;
        }
        if (((color1=="red")&&(color2=="yellow"))||((color2=="red")&&(color1=="yellow")))
        {
            cout<<"The mix is orange!"<<endl;
        }
        else cout<<"error: only enter primary colors in lowercase and make sure they are different"<<endl;
    
    

    //Exit Program
    return 0;
}