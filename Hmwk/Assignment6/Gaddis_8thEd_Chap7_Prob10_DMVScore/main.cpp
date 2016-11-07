/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on November 7, 2016, 9:40 AM
 * Purpose:  Static Array Functions
 *      will not even compile to let you use the for-in
 *      loop where array has not been locally declared
 */

//System Libraries Here
#include <iostream> //I/O
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(char [],char [],int &);
void prntAry(char [],char[], int); //print array
int score(char [],char [],int); 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=100;
    char key[SIZE], user[SIZE];
    int utilize;
    
    //Fill the array
    char fnkey[]="key.dat";
    char fnuser[]="user.dat";
    fillAry(fnkey,key,utilize);
    fillAry(fnuser,user,utilize);
    
    //Output Located Here
    prntAry(fnkey,key,utilize);
    prntAry(fnuser,user,utilize);
    
    
    //Results
    cout<<"The percentage = "
        <<100.0f*score(key, user, utilize)/utilize<<"%"<<endl;
    

    //Exit
    return 0;
}

int score(char key[],char user[],int n){
    //Declare variables
    int correct=0;
    
    //score the test
    for(int i=0;i<n;i++){
        if(key[i]==user[i])correct++;
    }
    //return the number correct
    return correct;
}

void prntAry(char fn[], char a[], int n){
    //Output Located Here
    int count=0;
    cout<<"The array is from file ->"<<fn<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(char fn[],char a[],int &n){
    //Declare variables and open the file
    ifstream in;
    int n=0;
    
    //Open the stream
    in.open(fn);
    
    //read in data
    while(in>>a[n++]);
    n--;
    
    //close the file
    in.close();
}

