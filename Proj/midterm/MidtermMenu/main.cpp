/* 
   File:   main
   Author: Logan Datin
   Created on October 21th, 8:08 PM
   Purpose:  Menu with Functions for Midterm 48101
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>      //Formatting control
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
//Function prototype for problem 3
void write(int); //function that writes out a number(for prob3)
//Function prototypes for problem 4
float calcA(float);
float calcB(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1(NumberX)"<<endl;
        cout<<"2.  Type 2  for Problem 2(4CharNumber)"<<endl;
        cout<<"3.  Type 3  for Problem 3(WriteACheck)"<<endl;
        cout<<"4.  Type 4  for Problem 4(SubscriptionPackage)"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Create an X with any number 1-50
//Inputs:   numbers 1-50
//Output:   Outputs an array that looks like an X
//******************************************************************************
void problem1(){
    //Declaration of Variables
    int num; //The number the user inputs
    float space; //The space in between the characters
    int one=1; //variable used to process an even number. equal to 1
    
    //Prompt for input
    cout<<"Please input an integer from 1-50"<<endl;
    cin>>num;
    
    
    //Validate input
    while(num<1||num>50){
        cout<<"Error: You must enter a number 1-50"<<endl;
        cin>>num;
    }
    //Rare instance that they enter 1 - process
    if(num==1){
        cout<<num<<endl;
    }
 
    //Process for odd number
        if(num%2!=0&&num!=1){ //if number is odd and not equal to one
        cout<<setw(20)<<num<<setw(num-1)<<num<<endl; //output first line
        for(int i=2;i+1<num;i++){  //loop for the 2nd line up to the middle number
            num--;
            cout<<setw(i+19)<<num<<setw(num-i)<<num<<endl;
        }

        cout<<setw(num-1+19)<<num-1<<endl; //middle number

        for(int i=1;num>2;i++){
            num--;
            cout<<setw(num+18)<<num-1<<setw(i*2)<<num-1<<endl;
        }

        }
    
    //process for even number
    else if(num%2==0) {
        cout<<setw(20)<<one<<setw(num-1)<<one<<endl;
        for(int i=2;one<num/2;i++){  //loop for the 2nd line up to the middle number
            one++;
            if (one<10){
            cout<<setw(i+19)<<one<<setw(num-i*2+1)<<one<<endl;
            }
            if (one>=10) {
            cout<<setw(i+19)<<one<<setw(num-i*2+2)<<one<<endl;    
            }
            
        }
        for(int i=1;one<num;i++){  //loop for the middle down
            one++;
            if (one<10){
            cout<<setw(one+20-2*i)<<one<<setw(i*2-1)<<one<<endl;
            }
            if (one>=10) {
                cout<<setw(one+20-2*i)<<one<<setw(i*2)<<one<<endl;
            }
        }
    }
    //Exit Program
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 2 ****************************************
//Purpose:  Read out a number with asterisks
//Inputs:   4 character number
//Output:   Outputs a number with asterisks that correlate to the number
//******************************************************************************
void problem2(){
    //Declaration of Variables
    int num; //number the user inputs
    int num3; //number of thousands
    int num2; //number of hundreds
    int num1; //number of tens
    int num0; //number of ones
    
    //User inputs
    cout<<"Please enter a 4 character number."<<endl;
    cin>>num;
    
    //Validate input
    while (num>9999||num<0){
        cout<<"Error: please enter only a four digit number"<<endl;
        cin>>num;
    }
    
    //Determine numbers for each place, 1000's, 100's, 10's, & 1's
    num3=num/1000;
    num2=(num-num3*1000)/100;
    num1=(num-num3*1000-num2*100)/10;
    num0=(num-num3*1000-num2*100-num1*10);
   
    //output 1's place asterisks
    cout<<num0<<" ";
    for(int i=0;i<num0;i++){
        cout<<"*";
    }cout<<endl;
    
    //output 10's place asterisks
    cout<<num1<<" ";
    for(int i=0;i<num1;i++){
        cout<<"*";
    }cout<<endl;
         
    //output 100's place asterisks
    cout<<num2<<" ";
    for(int i=0;i<num2;i++){
        cout<<"*";
    }cout<<endl;
    
    //output 1000's place asterisks
    cout<<num3<<" ";
    for(int i=0;i<num3;i++){
        cout<<"*";
    }cout<<endl;
    
    //Exit Program
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 3 ****************************************
//Purpose:  Give out check info
//Inputs:   Payee, holder, amount on check, memo, date
//Output:   Outputs check info in position
//******************************************************************************
void problem3(){
    //Declaration of Variables
    string date;     //the date of the check
    string payee;    //the person receiving the check
    int dollar;      //dollar value
    int cent;        //cent value
    string holder;   //The person issuing the check
    string memo;     //What the check is for
    
    //Prompt user for inputs
    cout<<"Enter the name of the person or entity that holds the account for";
    cout<<" the check"<<endl;
    getline(cin, holder);
    getline(cin, holder);  //<--for some reason, both of these need to be here to work in this function program, but not the original program
    cout<<"Please enter the date the check will be written and issued(MM/DD/YY)"<<endl;
    getline(cin, date);
    cout<<"Please enter the full name of the person or entity that the check will be paid to"<<endl;
    getline(cin, payee);
    cout<<"Please enter the whole dollar amount that the check will be written for(excluding cents)"<<endl;
    cin>>dollar;
    cout<<"Please enter the remaining cents that the check will be written for"<<endl;
    cin>>cent;
    cout<<"Please enter the memo"<<endl;
    cin>>memo;
     
    //Display Output
    cout<<holder<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE, ZIP"<<setw(27)<<"Date:  "<<date<<endl;
    cout<<endl;                         //skip line
    cout<<"Pay to the Order of:  "<<payee<<setw(13)<<"$ "<<dollar<<"."<<cent<<endl;
    cout<<endl;                         //skip line
    write(dollar);                      //call function to write out dollar amount
    cout<<" and ";                      //in between whole dollars and cents
    cout<<cent<<"/100 Dollars"<<endl;   //Cent value
    cout<<endl;                         //skip line
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;                         //skip line
    cout<<"FOR: "<<memo<<setw(36)<<holder<<endl;
       

//Exit Program
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 4 ****************************************
//Purpose:  Determine best package for a user to purchase 
//Inputs:   Their choice of subscription and how many hours they watch tv/month
//Output:   Outputs the best choice for them and how much they would save
//******************************************************************************
void problem4(){
    //Declaration of Variables
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
}

void problem5(){
    cout<<"Inside Problem E"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

void problem6(){
    cout<<"Inside Problem F"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 3 function *******************************
//Purpose:  Take numbers and output them in written form
//Inputs:   a whole number/integer
//Output:   written words that inform what the input's value is
//******************************************************************************
void write(int num){
    const char * const ones[20] = {"zero", "one", "two", "three","four","five",
    "six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen",
    "fifteen","sixteen","seventeen","eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty",
    "fifty","sixty","seventy","eighty","ninety"};
    
    if (num>=1000){ //for numbers greater than 1000
        write(num/1000); //function calls itself to get rid of the thousands until it is smaller than 1000
        cout<<" thousand"; //Outputs thousand after knowing how many
        if (num%1000){ //remainder when divided by 1000
            if(num%1000<100){ //if that remainder is less than 100, write and
                cout << " and";
            }
            cout<<" ";
            write(num%1000); //run function into itself while modding it by 1000
        }
    }    
        else if(num>=100){ //write what kind of hundred, repeat steps above (like 1000's))
        write(num/100);
        cout<<" hundred";
        if(num%100)
        {
            cout<<" and ";
            write(num%100);
        }
    }
        else if(num>=20)  //write the tens place
    {
        cout<<tens[num/10];
        if(num%10){
            cout<<" ";
            write(num%10);
        }
    }
    else{
        cout<<ones[num]; //write the ones place
    }
    //exit function
    return;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Package A Calculation - prob4 function **************
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
//********************* Package B Calculation prob4 function  ******************
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