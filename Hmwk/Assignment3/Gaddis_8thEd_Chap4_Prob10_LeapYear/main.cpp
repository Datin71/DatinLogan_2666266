/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 3, 2016, 9:50 AM
 * Purpose:  Leap year
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short year, month;  //Year from 1500 to 3000, month from 1-12
    
    //Input or initialize values Here
    cout<<"Type in year and month to return the number of days in a month"<<endl;
    cout<<"Month 1 to 12 and year 1500 to 3000"<<endl;
    cin>>year>>month;
    
    //input validation
    if(year<=1500||year>=3000){
        cout<<"Bad Year "<<endl;  //determines if year input is valid
    }
    if(month<1||month>12){    //Determines if month input is valid
        cout<<"Bad Month "<<endl;
    }
    
    //Process/Calculations Here
    switch(month){
        case 1: cout<<"There are 31 days in January, "<<year<<endl;break;
        case 13: {                      //sample code - made case 13 because 13 will never be used
            if(year%4!=0){
                cout<<"There are 28 days in February, "<<year<<endl;
            }else if(year%400==0){
                cout<<"There are 29 days in February, "<<year<<endl;break;
            }else if(year%100==0){
                cout<<"There are 28 days in February, "<<year<<endl;
            }else{
                cout<<"There are 29 days in February, "<<year<<endl;
            }
            break;
        }
        case 2: cout<<"There are "<<((((year%4==0)&&(year%100!=0))||(year%400==0))?"29":"28")<<" days in february, "<<year<<endl;
            break;
        
        case 3: cout<<"There are 31 days in March, "<<year<<endl;break;
        case 4: cout<<"There are 30 days in April, "<<year<<endl;break;
        case 5: cout<<"There are 31 days in May, "<<year<<endl;break;
        case 6: cout<<"There are 30 days in June, "<<year<<endl;break;
        case 7: cout<<"There are 31 days in July, "<<year<<endl;break;
        case 8: cout<<"There are 31 days in August, "<<year<<endl;break;
        case 9: cout<<"There are 30 days in September, "<<year<<endl;break;
        case 10: cout<<"There are 31 days in October, "<<year<<endl;break;
        case 11: cout<<"There are 31 days in November, "<<year<<endl;break;
        case 12: cout<<"There are 31 days in December, "<<year<<endl;break;
    }
    
    //Separate case using logical operators
   

    //Exit
    return 0;
}

