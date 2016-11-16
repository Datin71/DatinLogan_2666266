/* 
 * File:   main.cpp
 * Author: Logan Datin  
 * Created on November 15, 2016, 6:21 PM
 * Purpose:  Find min and max number in a user input array
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
    int ary[10];    //array at the size of 10
    int max=-10000;        //Largest number in the array
    int min=10000;        //Smallest number in the array
    
    //input into array
    for(int i=0;i<10;i++){
        cout<<"Enter a number"<<endl;
        cin>>ary[i];
    }
    
    //find max
    for(int j=0;j<9;j++){
        cout<<"Array "<<ary[j+1]<<endl;
        if (ary[j]>max){
            max=ary[j];
        }
    }
    
    //find min
    for(int k=0;k<9;k++){
        cout<<"Array "<<ary[k+1]<<endl;
        if (ary[k]<min){
            min=ary[k];
        }
    }
    
    //Output
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
    //Exit
    return 0;
}
