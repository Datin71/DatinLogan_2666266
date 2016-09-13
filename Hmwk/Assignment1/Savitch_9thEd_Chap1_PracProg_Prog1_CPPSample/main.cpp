/* 
   File:   main
   Author: Logan Datin
   Created on September 12, 2016, 8:44 PM
   Purpose: Copy Sample C++ Program and make sure it compiles and runs
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod"<<endl;
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods";
    cout<<" and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    
    //Exit Program
    return 0;
}