/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on November 16th, 2016, 9:37 AM
 * Purpose:  Mark Sort - Translate all functions into 1 function
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
//void fillAry(int [],int);
//void prntAry(int [],int);
//void swap(int &,int &);
//void minPos(int [],int,int);
//void markSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int array[SIZE],utilize;
    int count=0;
        
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    for(int i=0;i<utilize;i++){
        array[i]=rand()%90+10;//Random 2 digit number
    }
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<utilize;i++){
        cout<<array[i]<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
    
    //Test out minPos
    
    //markSrt(array,utilize);
    for(int i=0;i<utilize-1;i++){
        //minPos(array,utilize,i);
        for(int j=i+1;j<utilize;j++){
        if(array[i]>array[j]){//{swap(array[i],array[j]);
            array[i]=array[i]^array[j];
            array[j]=array[i]^array[j];
            array[i]=array[i]^array[j];
        }
    }
    }
    
    //Output Located Here
    //prntAry(array,utilize);
    cout<<"The Array"<<endl;
    for(int i=0;i<utilize;i++){
        cout<<array[i]<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;

    //Exit
    return 0;
}

//void markSrt(int a[],int size){
//    for(int i=0;i<size-1;i++){
//        minPos(a,size,i);
//    }
//}

//void minPos(int a[],int size,int pos){
//    for(int i=pos+1;i<size;i++){
//        if(a[pos]>a[i])swap(a[pos],a[i]);
//    }
//}

//void swap(int &a,int &b){
    //Temp memory Swap
    //int temp=a;
    //a=b;
    //b=temp;
    //In place memory Swap
//    a=a^b;
//    b=a^b;
//    a=a^b;
//}

//void prntAry(int a[],int n){
    //Output Located Here
//    int count=0;
//    cout<<"The Array"<<endl;
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//        if((count++)%10==9)cout<<endl;
//    }
//    cout<<endl;
//}

//void fillAry(int a[],int n){
    //Fill the array
//    for(int i=0;i<n;i++){
//        a[i]=rand()%90+10;//Random 2 digit number
//    }
//}