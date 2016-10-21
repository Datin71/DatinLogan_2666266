/* 
   File:   main
   Author: Logan Datin
   Created on October 19, 2016, 5:16 PM
   Purpose:  Input check info - output check info formatted for a check
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Output formatting  
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void write(int); //function that writes out a number
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string date;     //the date of the check
    string payee;    //the person receiving the check
    int dollar;      //dollar value
    int cent;        //cent value
    string holder;   //The person issuing the check
    string memo;     //What the check is for
    
    //Prompt user for inputs
    cout<<"This program will assist in writing a check"<<endl;
    cout<<"Enter the name of the person or entity that holds the account for the check"<<endl;
    getline(cin, holder);
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
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
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
   