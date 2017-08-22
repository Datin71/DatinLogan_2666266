/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on November 16, 2016, 10:35 AM
 * Purpose:  Different levels of salsa info
 */

//System Libraries Here
#include <iostream>
#include <iomanip>  //output formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string salsa[5];        //Types of salsa
    int sales[5];           //Sales for each type of salsa
    int min=1000,max=-1000; //min and max sales
    string minS, maxS;      //min and max salsa names
    int totalS=0;             //total sales
    
    //Fill salsa array
    salsa[0]="mild";
    salsa[1]="medium";
    salsa[2]="sweet";
    salsa[3]="hot";
    salsa[4]="zesty!";
          
    //fill sales array
    for (int i=0;i<5;i++){
    cout<<"Enter number of jars sold of "<<salsa[i]<<" salsa"<<endl;
    cin>>sales[i];
    while (sales[i]<0){ //input validation
        cout<<"cannot have negative sales, enter number of jars sold of "<<salsa[i]<<" salsa"<<endl;
        cin>>sales[i];}
    }
    
    //find minimum selling salsa
    for(int k=0;k<5;k++){
        if (sales[k]<min){
            min=sales[k];
            if (min=sales[k]){
                minS=salsa[k];
            }
        }
    }
    
    //find maximum selling salsa
    for(int k=0;k<5;k++){
        if (sales[k]>max){
            max=sales[k];
            if (max=sales[k]){
                maxS=salsa[k];
            }
        }
    }
    
    //total sales
    for (int j=0;j<5;j++){
        totalS+=sales[j];
    }
    
    //Output the data
    cout<<"Total Sales: "<<totalS<<" jars"<<endl;
    cout<<"Highest Selling Salsa: "<<maxS<<endl;
    cout<<"Lowest Selling Salsa: "<<minS<<endl;
    cout<<"# of Jars Sold    "<<"Salsa Type"<<endl;
    for (int i=0;i<5;i++){
        cout<<setw(8)<<sales[i];
        cout<<setw(17)<<salsa[i]<<endl;
       
    }

    //Exit
    return 0;
}

