/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Safest Driving Area
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int numA(int); //Number of accidents
void lowest(int, int, int, int, int);   //Find the lowest number of accidents

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numN; //number of accidents in the north
    int numS; //number of accidents in the south
    int numE; //number of accidents in the east
    int numW; //number of accidents in the west
    int numC; //Number of accidents in the central
    
    //Process to get results
    cout<<"Input number of accidents in North region"<<endl;
    numN=numA(numN); //function to find accident # in the north
    cout<<"Input number of accidents in South region"<<endl;
    numS=numA(numS); //function to find accident # in the south
    cout<<"Input number of accidents in East region"<<endl;
    numE=numA(numE); //function to find accident # in the east
    cout<<"Input number of accidents in West region"<<endl;
    numW=numA(numW); //function to find accident # in the West
    cout<<"Input number of accidents in Central region"<<endl;
    numC=numA(numC); //function to find accident # in the Central
    
    //Output
    lowest(numN,numS,numE,numW,numC);
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   input number of accidents   *************************
//Purpose:  input number of accidents
//Inputs:   none
//Output:   numX ->the number of accidents entered
//******************************************************************************

int numA(int numX){
    //User Input
    cin>>numX;
    
    //Validate input
    while(numX<0){      
        cout<<"Enter number greater than 0"<<endl;
        cin>>numX;
    }
    return numX;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Output region with lowest accidents******************
//Purpose:  Output region with lowest accidents
//Inputs:   the different region accident data
//Output:   cout the region with lowest accident rating, number of accidents
//******************************************************************************

void lowest(int n, int s, int e, int w, int c){
    //output lowest value
    if(n<s&&n<e&&n<w&&n<c){
        cout<<"North has the lowest accident count with "<<n<<" accidents"<<endl;
    }
    if(s<n&&s<e&&s<w&&s<c){
        cout<<"South has the lowest accident count with "<<s<<" accidents"<<endl;
    }
    if(e<s&&e<n&&e<w&&e<c){
        cout<<"East has the lowest accident count with "<<e<<" accidents"<<endl;
    }
    if(w<s&&w<e&&w<n&&w<c){
        cout<<"West has the lowest accident count with "<<w<<" accidents"<<endl;
    }
    if(c<s&&c<e&&c<w&&c<n){
        cout<<"Central has the lowest accident count with "<<c<<" accidents"<<endl;
    }
    
}