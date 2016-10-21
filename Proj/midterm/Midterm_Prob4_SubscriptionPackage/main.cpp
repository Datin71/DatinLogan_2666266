/* 
   File:   main
   Author: Logan Datin
   Created on October 20, 2016, 8:58 PM
   Purpose:  Determine cost of subscription package and advise when 
             subscription package should change to an alternate solution
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format outputs  
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

float calcA(float);
float calcB(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float rateA=16.75, RateB=23.75, RateC=34.95; //The $/month of package a, b, & c
    int hourA=5, hourB=15, hourC=744;   //hours to be viewed/month @ normal rate
    int penTA=20, penTb=25;   //time to be penalized for @ high rate for a&b
    float penRA1=0.85, penRA2=1, penRB1=0.65, penRB2=0.75; //Different penalty rates for a&b
    int choice; //The package that the user selects
    int watch;  //Hours/month that the user will watch
    
    
    //Prompt user for inputs
    cout<<"Package A:"<<endl;
    cout<<"-5 hours/month @ $16.75/month"<<endl;
    cout<<"-$0.85/hour after 15 hours"<<endl;
    cout<<"-$1.00/hour after 25 hours"<<endl;
    cout<<endl;
    cout<<"Package B:"<<endl;
    cout<<"-15 hours/month @ $23.75/month"<<endl;
    cout<<"-$0.65/hour after 15 hours"<<endl;
    cout<<"-$0.75/hour after 40 hours"<<endl;
    cout<<endl;
    cout<<"Package C:"<<endl;
    cout<<"-Unlimited Access @ $34.95/month"<<endl;
    cout<<endl;
    cout<<"Press [1] for Package A"<<endl;
    cout<<"Press [2] for Package B"<<endl;
    cout<<"Press [3] for Package C"<<endl;
    cin>>choice;
    
    //Validate input
    while(choice!=1&&choice!=2&&choice!=3){
        cout<<"Error: Input Invalid"<<endl;
        cout<<"Press [1] for Package A"<<endl;
        cout<<"Press [2] for Package B"<<endl;
        cout<<"Press [3] for Package C"<<endl;
        cin>>choice;
    }
    
    //Prompt for user input
    cout<<"How many hours will you watch a month?"<<endl;
    cin>>watch;
    
    //Validate input
    while (watch<0||watch>744){
        cout<<"Error: Input Invalid"<<endl;
        cout<<"How many hours will you watch a month?"<<endl;
        cin>>watch;
    }
    //Package A Output
    if (choice==1){
        cout<<"You have selected Package A"<<endl;
        cout<<"Based on your amount of hours you will be watching, it will cost you $";
        calcA(watch);
        cout<<"per month"<<endl;
    }
    //Package B Output
    if (choice==2){
        cout<<"You have selected Package B"<<endl;
        cout<<"Based on your amount of hours you will be watching, it will cost you $";
        calcB(watch);
        cout<<"per month"<<endl;
    }
    //Package C Output
    if (choice==3){
        cout<<"You have selected Package C"<<endl;
        cout<<"It will cost you $34.95 per month and you can watch unlimited hours"<<endl;
        }
    
    //Output all options
    cout<<"Hours watched per month: "<<watch<<endl;
    cout<<"Package A cost/month: $";
            float totalA=calcA(watch); //set price for package A
    cout<<"Package B cost/month: $";
            float totalB=calcB(watch); //set price for package B
    cout<<"Package C cost/month: $34.95"<<endl;
    
    //Determine best Package for user
    if (choice==1){
        if (totalA<totalB&&totalA<34.95){
            cout<<"You have chosen the cheapest package"<<endl;
    }
        if (totalA>totalB&&totalB<34.95){
            cout<<"Package B is the cheapest option. You will save $"<<totalA-totalB<<endl;
        }
        if (totalA>34.95&&totalB>34.95){
            cout<<"Package C is the cheapest option. You will save $"<<totalA-34.95<<endl;
        }
    }
    
    
    if (choice==2){
        if (totalB<totalA&&totalB<34.95){
            cout<<"You have chosen the cheapest package"<<endl;
        }   
        if (totalB>34.95&&totalA>34.95){
            cout<<"Package C is the cheapest option. You will save $"<<totalB-34.95<<endl;
        }
        if (totalA<totalB){
            cout<<"Package A is the cheapest option. You will save $"<<totalB-totalA<<endl;
        }
                
    }
    
    if (choice==3){
        if (34.95<totalA&&totalB>34.95){
            cout<<"You have chosen the cheapest package"<<endl;
        }   
        if (totalB<34.95&&totalB<totalA){
            cout<<"Package B is the cheapest option. You will save $"<<34.95-totalB<<endl;
        }
        if (totalA<totalB){
            cout<<"Package A is the cheapest option. You will save $"<<34.95-totalA<<endl;
        }
                
    }
    
    

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Package A Calculation *******************************
//Purpose:  Calculate the price for Package A
//Inputs:   input how many hours were watched
//Output:   output cost per month
//******************************************************************************

float calcA(float num){
    //Declare Variables
    float rateA=16.75; //Rate/month
    int hourA=5;        //hours/month limit @ low rate
    int penTA=20;       //hours/month limit @ mid rate
    float penRA1=0.85, penRA2=1; //cost/hour mid&high
    float totalA;       //total cost per month
    
    //process monthly rate
    totalA=(num<=5)?rateA: //rate at 5 hours or less
           (num>5&&num<=25)?rateA+(num-5)*penRA1: //rate at 5-25 hours
           rateA+(num-5)*penRA1+(num-25)*penRA2;//rate at over 25 hours
            cout<<fixed<<setprecision(2)<<totalA<<endl; //output number
            
    return totalA; 
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//********************* Package B Calculation **********************************
//Purpose:  Calculate the price for Package B
//Inputs:   input how many hours were watched
//Output:   output cost per month
//******************************************************************************

float calcB(float num){
    //Declare Variables
    float rateB=23.75; //Rate/month
    int hourB=15;        //hours/month limit @ low rate
    int penTB=25;       //hours/month limit @ mid rate
    float penRB1=0.65, penRB2=0.75; //cost/hour mid&high
    float totalB;       //total cost per month
    
    //process monthly rate
    totalB=(num<=15)?rateB: //rate at 15 hours or less
           (num>15&&num<=40)?rateB+(num-15)*penRB1: //rate at 15-40 hours
           rateB+(num-15)*penRB1+(num-40)*penRB2;//rate at over 40 hours
            cout<<fixed<<setprecision(2)<<totalB<<endl; //output number
   
    return totalB; 
   
}