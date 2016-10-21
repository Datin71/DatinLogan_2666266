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
    int dollar; //dollar value
    int cent; //cent value
    string holder;   //The person issuing the check
    
    //Prompt user for inputs
    cout<<"This program will assist in writing a check"<<endl;
    cout<<"Please enter the date the check will be written and issued(MM/DD/YY)"<<endl;
    getline(cin, date);
    cout<<"Please enter the full name of the person or entity that the check will be paid to"<<endl;
    getline(cin, payee);
    cout<<"Please enter the whole dollar amount that the check will be written for"<<endl;
    cin>>dollar;
    cout<<"Please enter the cent amount that the check will be written for"<<endl;
    cin>>cent;
    cout<<"Please enter the name of the person or entity issuing the check"<<endl;
    getline(cin,holder);
    write(dollar);
    cout<<" Dollars and ";
    write(cent);
    cout<<" cents "<<endl;
    
    
    
    //Change Amount to written output
    
    
    //Display Output
    cout<<"date: "<<date<<endl;
    cout<<"Payee: "<<payee<<endl;
    cout<<"Amount: "<<dollar<<endl;
    cout<<"Account Holder: "<<holder<<endl;

    //Exit Program
    return 0;
}

void write(int num){
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};
    
    if (num>=1000){ //for numbers greater than 1000
        write(num/1000); //function calls itself to get rid of the thousands until it is smaller than 1000
        cout<<" thousand";
        if (num%1000){ 
            if(num%1000<100){
                cout << " and";
            }
            cout<<" ";
            write(num%1000);
        }
    }    
        else if(num>=100){
        write(num/100);
        cout<<" hundred";
        if(num%100)
        {
            cout<<" and ";
            write(num%100);
        }
    }
    else if(num>=20)
    {
        cout<<tens[num/10];
        if(num%10){
            cout<<" ";
            write(num%10);
        }
    }
    else{
        cout<<ones[num];
    }
    return;
}
   