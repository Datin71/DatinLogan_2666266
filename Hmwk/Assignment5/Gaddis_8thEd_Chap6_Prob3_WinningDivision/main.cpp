/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 2:14 PM
   Purpose:  Determine the highest sales for a quarter between 4 divisions
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float sales(float); //Input the division's sales
void topSale(float,float,float,float); //Compare and output the top sale division
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ne,se,nw,sw; //Northeast, southest, northwest, southwest divisions
        
    //Process to input sales figures
    cout<<"Enter the sales from the NorthEast division"<<endl;
    ne=sales(ne);
    cout<<"Enter the sales from the SouthEast division"<<endl;
    se=sales(se);
    cout<<"Enter the sales from the NorthWest division"<<endl;
    nw=sales(nw);
    cout<<"Enter the sales from the SouthWest division"<<endl;
    sw=sales(sw);    
    
    //compare sales figures
    topSale(ne,se,nw,sw);
    
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   top selling division  **************************
//Purpose:  Determine the top selling division
//Inputs:   The four different division sales 
//Output:   cout the top selling division
//******************************************************************************

void topSale(float ne,float se,float nw,float sw){
    if (ne>se&&ne>nw&&ne>sw){
        cout<<"NorthEast is the top selling division with a total of $"<<ne<<" in sales"<<endl;
    }
    if (se>ne&&se>nw&&se>sw){
        cout<<"SouthEast is the top selling division with a total of $"<<se<<" in sales"<<endl;
    }
    if (nw>ne&&nw>se&&nw>sw){
        cout<<"NorthWest is the top selling division with a total of $"<<nw<<" in sales"<<endl;
    }
    if (sw>ne&&sw>se&&sw>nw){
        cout<<"SouthWest is the top selling division with a total of $"<<sw<<" in sales"<<endl;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   enter the division sales  *************************
//Purpose:  Enter and validate the division sales 
//Inputs:   input the division being evaluated
//Output:   output how much the division sales were
//******************************************************************************

float sales(float div){
    cin>>div;
    while (div<0){
        cout<<"You cannot enter a negative number"<<endl;
        cin>>div;
    }
    return div;
}



