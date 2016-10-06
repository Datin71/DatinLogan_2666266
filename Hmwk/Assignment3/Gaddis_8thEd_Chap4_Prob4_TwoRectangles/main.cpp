/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:06 PM
   Purpose:  Determine 
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
    float length1, length2, width1, width2, area1, area2; //Geometry of the two rectangles
    //Input values
    cout<<"What is the length of the first rectangle?"<<endl;
    cin>>length1;
    cout<<"What is the width of the first rectangle?"<<endl;
    cin>>width1;
    cout<<"What is the length of the second rectangle?"<<endl;
    cin>>length2;
    cout<<"What is the width of the second rectangle?"<<endl;
    cin>>width2;
    //Process values -> Map inputs to Outputs
    area1=length1*width1;   //Calculate the area of rectangle 1
    area2=length2*width2;   //Calculate the area of rectangle 2
    //Display Output
    cout<<"The area of rectangle 1 is "<<area1<<" units squared"<<endl;
    cout<<"The area of rectangle 2 is "<<area2<<" units squared"<<endl;
    (area1>area2)?cout<<"Rectangle 1 has a larger area than rectangle 2":  //is area 1 greater then area 2?
    (area1==area2)?cout<<"Both rectangles have the same area":
    cout<<"Rectangle 2 has a larger area than rectangle 1";
    
    //Exit Program
    return 0;
}