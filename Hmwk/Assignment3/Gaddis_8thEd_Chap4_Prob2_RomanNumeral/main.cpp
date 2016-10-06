/* 
   File:   main
   Author: Logan Datin
   Created on October 5, 2016, 3:28 PM
   Purpose:  Convert a number 1-10 to display the Roman numeral of that number
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
    int number;  //The user determined number from 1-10
    //Input values
    cout<<"Enter a whole number 1-10"<<endl; //prompt user for a number
    cin>>number;
   
    //Process values -> Map inputs to Outputs -> and display result
    if ((number>10)||(number<1))   //if statement to validate the number
    {
      cout<<"ERROR!:Enter a whole number between 1 and 10!" <<endl;
      return 1;
    }
    else switch (number){           //switch determines which output to use
        case 1:cout<<"The Roman numeral for "<<number<<" is I"<<endl;break;
        case 2:cout<<"The Roman numeral for "<<number<<" is II"<<endl;break;
        case 3:cout<<"The Roman numeral for "<<number<<" is III"<<endl;break;
        case 4:cout<<"The Roman numeral for "<<number<<" is IV"<<endl;break;
        case 5:cout<<"The Roman numeral for "<<number<<" is V"<<endl;break;
        case 6:cout<<"The Roman numeral for "<<number<<" is VI"<<endl;break;
        case 7:cout<<"The Roman numeral for "<<number<<" is VII"<<endl;break;
        case 8:cout<<"The Roman numeral for "<<number<<" is VIII"<<endl;break;
        case 9:cout<<"The Roman numeral for "<<number<<" is IX"<<endl;break;
        case 10:cout<<"The Roman numeral for "<<number<<" is X"<<endl;
                
    }

    //Exit Program
    return 0;
}