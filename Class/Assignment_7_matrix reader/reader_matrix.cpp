/* 
   File:   main
   Author: Logan Datin
   Created on November 15th, 2016, 4:58 PM
   Purpose:  Matrix reader - Assignment 7
 */

#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>

//int rowA = 0;
//int colA =0;
using namespace std;

int main(){  
    //Locate and open file - CHANGE FILE NAME HERE!!!!
    ifstream reader("Matrix.txt");
    int a,b;
    
    //execute
    if(reader.is_open())
    {
        reader>>a;  //a is number of rows   
        reader>>b;  //b is number of columns
        int array[a][b], i, j;  //the array size will adjust itself
        cout<<"sum of variables a and b is "<< a+b<< endl;
        cout<<"Rows="<<a<<endl;
        cout<<"Columns="<<b<<endl;
        
    //Display the matrix that was found in the txt file    
        for (i=0; i<a;i++)
        
            for (j=0;j<b;j++)
            {
                reader>>array[a][b];
                cout<<array[a][b]<<" ";
                if(j==b-1)
               cout<<endl;
            }     
    }
    reader.close(); //close file
    return 0;
}