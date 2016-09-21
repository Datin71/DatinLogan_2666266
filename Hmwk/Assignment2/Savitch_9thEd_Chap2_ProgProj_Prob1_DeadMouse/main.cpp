/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 21, 2016, 10:12 AM
 * Purpose:  Calculate how much diet soda can be consumed before death occurs based on weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float POPRATIO=0.001; //Ratio of deadly sweetener in diet soda

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   msDeath=5; //grams it takes to kill a mouse
    float wtMouse=35; //weight of mouse
    int   lbCnvrt=454; //number of grams in 1 pound
    int     wSoda=350; //Mass of soda pop in a single can in grams
    float      dRatio; //ratio that determines how much substance it takes to kill
    float      wtDsrd; //User defined weight that is desired to be at, come the end of the diet
    int        wtGram; //User's weight in grams
 
    //Input or initialize values Here
    cout<<"How much do you want to weigh at the end of your diet, in pounds?"<<endl; //prompt user for desired weight
    cin>>wtDsrd;                                                                     //user's desired weight input                                                 
    
    //Process/Calculations Here
    dRatio=msDeath/wtMouse; //calculate the death ratio
    wtGram=wtDsrd*lbCnvrt;   //Convert user's weight from pounds to grams  
    
    
    //Output Located Here
    cout<<dRatio<<endl;
    

    //Exit
    return 0;
}

