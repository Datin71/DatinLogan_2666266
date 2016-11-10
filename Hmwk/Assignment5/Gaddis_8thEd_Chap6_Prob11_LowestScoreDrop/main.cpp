/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Lowest Score Drop
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void score(float &);    //Gets the score
void ave(float,float,float,float,float,float);      //Calculates and displays the average of the highest 4 scores
float low(float &,float &,float &,float &,float &); //Finds the lowest score

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float tScore1;   //Test Score Number1
    float tScore2;   //Test Score Number2
    float tScore3;   //Test Score Number3
    float tScore4;   //Test Score Number4
    float tScore5;   //Test Score Number5
    float min;       //Lowest score value
    float h1,h2,h3,h4; //High 4 scores
    
    //Process to get results
    score(tScore1);
    score(tScore2);
    score(tScore3);
    score(tScore4);
    score(tScore5);
    
    //Process to find lowest score
    min=low(tScore1,tScore2,tScore3,tScore4,tScore5);
    
    //Process and output to average the four highest scores
    ave(tScore1,tScore2,tScore3,tScore4,tScore5,min);
    

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Find low score              *************************
//Purpose:  Find low score
//Inputs:   the 5 test score
//Output:   the lowest score
//******************************************************************************


float low(float &tScore1,float &tScore2,float &tScore3,float &tScore4,float &tScore5){
    //Declare Variable
    float min=101;  //minimum
    
    //Process find lowest score
    if (tScore1<min)
        min=tScore1;
    if (tScore2<min)
        min=tScore2;
    if (tScore3<min)
        min=tScore3;
    if (tScore4<min)
        min=tScore4;
    if (tScore5<min)
        min=tScore5;
    
    //Output
    return min;      
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Average of top 4 scores     *************************
//Purpose:  Find the average of the top 4 scores
//Inputs:   The minimum score and the test results
//Output:   the average of the top 4 scores
//******************************************************************************


void ave(float a,float b,float c,float d,float e,float min){
    //Declare Variables
    float avrg; //average score value
    
    //process
    if (min==a)
        avrg=(b+c+d+e)/4;
    if (min==b)
        avrg=(a+c+d+e)/4;
    if (min==c)
        avrg=(b+a+d+e)/4;
    if (min==d)
        avrg=(b+c+a+e)/4;
    if (min==e)
        avrg=(b+c+d+a)/4;
    
    //Output
    cout<<"The average of the 4 highest scores is "<<avrg<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   collect test score data     *************************
//Purpose:  collect test score data 
//Inputs:   none
//Output:   test scores
//******************************************************************************


void score(float &tScore){
    //Get score from user
    cout<<"What is the score for this test"<<endl;  
    cin>>tScore;
    while(tScore<0||tScore>100){
        cout<<"Error. Score Must be between 0-100."<<endl;
        cin>>tScore;
    }
    tScore=tScore;
  
}