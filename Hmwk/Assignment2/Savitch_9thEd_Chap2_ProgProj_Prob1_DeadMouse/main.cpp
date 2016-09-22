/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 21, 2016, 10:12 AM
 * Purpose:  Calculate how much diet soda can be consumed before death occurs based on weight
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float POPRATIO=0.001; //Ratio of deadly sweetener in diet soda
const int DAYSPERYEAR=365;  //How many days are in a year

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
    float     artSwPC; //Artifical Sweetened per can in grams
    float     deadAmt; //Deadly amount of sweetener for a specific weight
    float        dCan; //Just below deadly amount of cans of soda
    float       yrsAliv; //The users expected amount of years to be alive
    float        sodDay; //The amount of soda that can be consumed per day for a number of years 
 
    //Input or initialize values Here
    cout<<"How much do you want to weigh at the end of your diet, in pounds?"<<endl; //prompt user for desired weight
    cin>>wtDsrd;  //user's desired weight input 
                                                     
    
    //Process/Calculations Here
    dRatio=msDeath/wtMouse; //calculate the death ratio
    wtGram=wtDsrd*lbCnvrt;  //Convert user's weight from pounds to grams  
    artSwPC=wSoda*POPRATIO; //Calculate how much artifical sweetener is in a can of soda
    deadAmt=wtGram*dRatio;  //How many grams of artificial sweetener will lead to death
    dCan=(deadAmt/artSwPC)-.1;   //Just below how many cans of soda will kill you
    
    
    //Output Located Here
    cout<<"Amount of deadly sweetener in a can of soda:"<<artSwPC<<"g"<<endl;
    cout<<"Your weight in grams:"<<wtGram<<"g"<<endl;
    cout<<"Your weight in pounds:"<<wtDsrd<<" lbs"<<endl;
    cout<<"Weight of deadly dose of artificial sweetener:"<<deadAmt<<"g"<<endl;
    cout<<"You are allowed to drink "<<dCan<<" cans of diet soda without dying, any more soda than that will lead to death"<<endl;
    cout<<"How many more years do you plan on living?"<<endl;
    cin>>yrsAliv;
    sodDay=(dCan/yrsAliv)/DAYSPERYEAR; //How many cans of soda per year can you drink for a certain number of years
    cout<<setprecision(2)<<"You can drink "<<sodDay<<" cans of diet soda per day for the next "<<yrsAliv<<" years."<<endl;

    //Exit
    return 0;
}

