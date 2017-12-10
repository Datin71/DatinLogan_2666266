/* 
   File:   main
   Author: Logan Datin
   Created on November 15th, 2016, 4:58 PM
   Purpose:  Matrix creater - Assignment 7
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int row, col, rc_[100][100], i, j;

    cout<<"Enter number of rows (between 1 and 100): ";
    cin>>row;

    cout<<"Enter number of columns (between 1 and 100): ";
    cin>>col;

    cout<<endl<<"Enter elements of the matrix: "<<endl;

    // Storing elements of the matrix entered by user.
    for(i=0; i<row; ++i)
       for(j=0; j<col; ++j)
       {
           cout<<"Enter element rc_" <<i+1<<j+1<<" : ";
           cin>>rc_[i][j];
       }

    // Displaying the matrix.
    cout<<endl<<"The matrix is: "<<endl;
    cout<<row<<" "<<col<<endl;
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
       {
           cout<<rc_[i][j]<<"  ";
            if(j==col-1)
               cout<<endl;
        }

    //Write Matrix to .txt file    
    ofstream outputFile;    //code for file
    outputFile.open("Matrix.txt");   //code for file
    
    outputFile<<row<<" "<<col<<endl;
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            outputFile<<rc_[i][j]<<" ";
        }
        outputFile<<"\n";
    }
    
    return 0;
}
