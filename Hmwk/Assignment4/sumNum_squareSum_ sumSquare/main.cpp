/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on October 19, 2017, 6:35 PM
 * Purpose:  Sum of Numbers, Sum of Squares, Square of sum
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int value;      //User entered value
    int sumValue;   //sum of numbers up to the original value
    int sumSquare;  //Sum of squares of numbers up to the original value
    int place;      //holds a number for processing
    int squareSum;  //The number that is the square of the sumValue
    
    //Request Input
    cout<<"Enter a number greater than 1"<<endl;
    cin>>value;
    
    //Validate the input
    while(value<=1){
        cout<<"Error: Enter a number greater than 1"<<endl;
        cin>>value;
    }    

    //Process the data for the sum
    do {
             for(int i=1; i<=value;i++)
                 {
                      sumValue+=i;
                 }

         
		 cout<<endl;
       
     } while( sumValue <= value );
     
     //Process the data for the sum of squares
     do {
             for(int j=1; j<=value;++j)
                 {
                      place=j*j;
                      sumSquare+=place;
                 }

         
		 cout<<endl;
       
     } while( sumSquare<= value );
     
     //Process the data to determine the square of the sum 
     squareSum=sumValue*sumValue;
     
    //Output the data
     cout<<"Sum of values from 1 to "<<value<<" = "<<sumValue<<endl;
     cout<<"Sum of squares of numbers from 1 to "<<value<<" = "<<sumSquare<<endl;
     cout<<"Square of the sum of numbers from 1 to "<<value<<" = "<<squareSum<<endl;
   
       
    

    //Exit
    return 0;
}