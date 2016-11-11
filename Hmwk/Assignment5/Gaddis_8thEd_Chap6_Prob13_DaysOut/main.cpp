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
float avrg(int,int); //Average number of days absent per employee

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int emp;    //number of employees
    int absentT; //Times that employees were absent
    
    //Process to input number of employees
    emp=numEmp(); 
    absentT=absent(emp);
    
    //Output
    cout<<"Average day that an employee will be absent: "<<avrg(emp,absentT)<<endl;
    cout<<"Number of Employees: "<<emp<<endl;
    cout<<"Total number of days that employees were absent: "<<absentT<<endl;
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Determine Average absent    *************************
//Purpose:  Determine Average absent
//Inputs:   number of employees and total days absent
//Output:   average days an employee is absent
//******************************************************************************

float avrg(int emp,int absentT){
    //Declare Variables
    float average; //Average employee will be absent
        
    //Process to find average
    average=static_cast<float>(absentT)/static_cast<float>(emp);
    
    //output
    return average;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Days Absent Total           *************************
//Purpose:  add the number of days each employee is absent
//Inputs:   number of employees
//Output:   total absent days of all workers
//******************************************************************************

int absent(int emp){
    //Declare Variables
    int abs;    //Number of times an employee is absent
    int absT=0;   //absent total
    
    //Input 
    for (int i=1;i<=emp;i++){
        cout<<"Enter times that employee "<<i<<" was absent"<<endl;
        cin>>abs;
        while(abs<0){
            cout<<"Error. Enter a number 0 or greater"<<endl;
            cin>>abs;
        }
        absT=absT+abs;
    }
    return absT;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Number of Employees         *************************
//Purpose:  Determine number of employees
//Inputs:   none
//Output:   number of employees
//******************************************************************************

int numEmp(){
    //Declare Variables
    int emp; //number of employees
    
    //input
    cout<<"Enter the number employees in the company"<<endl;
    cin>>emp;
    
    //validate
    while(emp<0){
        cout<<"Error. Cannot have negative amount of employees"<<endl;
        cin>>emp;
    }
    return emp;
}