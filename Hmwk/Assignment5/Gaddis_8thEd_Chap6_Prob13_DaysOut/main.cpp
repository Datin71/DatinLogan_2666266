/* 
   File:   main
   Author: Logan Datin
   Created on November 8, 2016, 4:53 PM
   Purpose:  Average days out of work
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int numEmp(); //Number of employees in company
int absent(int); //Number of days absent
int avrg(int,int); //Average number of days absent per employee

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int emp;    //number of employees
    
    //Process to get results
    emp=numEmp();    
    //Output
    cout<<emp<<endl;
    //Exit Program
    return 0;
}

int numEmp(){
    //Declare Variables
    int emp; //number of employees
    
    //input
    cout<<"Enter the number employees in the company"<<endl;
    cin>>emp;
    
    //validate
    while(emp<0){
        cout<<"Error. Cannot have negative amount of employess"<<endl;
        cin>>emp;
    }
    return emp;
}