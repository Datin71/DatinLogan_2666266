/* 
   File:   main
   Author: Logan Datin
   Created on October 17, 2016, 8:08 PM
   Purpose: Create menu with options to run any of the programs 
            assigned in assignment 4 
 */


//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1 Gaddis - Sum of Numbers"<<endl;
        cout<<"2.  Type 2  for Problem 3 Gaddis - Ocean Levels"<<endl;
        cout<<"3.  Type 3  for Problem 4 Gaddis - Calories Burned"<<endl;
        cout<<"4.  Type 4  for Problem 5 Gaddis - Membership Fees"<<endl;
        cout<<"5.  Type 5  for Problem 6 Gaddis - Distance Traveled"<<endl;
        cout<<"6.  Type 6  for Problem 7 Gaddis - Pennies for Pay"<<endl;
        cout<<"7.  Type 7  for Problem 9 Gaddis - Hotel Occupancy"<<endl;
        cout<<"8.  Type 8  for Problem 10 Gaddis - Average Rainfall"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem 1 Gaddis - Sum of Numbers"<<endl;
                    //Declare all Variables Here
                    int minNum=1; //Starting number
                    int maxNum; //User defined positive integer value
                    int sum; //The sum of all the integers up to the number that was input
                    //Prompt user for integer
                    cout<<"Enter a positive integer"<<endl;
                    cin>>maxNum;

                    //Validate the input
                    while (maxNum<0){
                        cout<<"You must enter a positive integer"<<endl;
                        cin>>maxNum;
                    }

                    //Process/Calculations Here
                    for (int i=minNum;i<=maxNum;i++){  //i is equal to 1, is i less/equal to that max number? if so, do the process, then add 1. Find out if true. repeat until true
                        sum=sum+i; //The sum is equal to itself plus i

                    }

                    //Output Located Here
                    cout<<"You entered : "<<maxNum<<endl;
                    cout<<"The sum of all of the integers up to your number is: "<<sum<<endl;

                break;
            }
            case 2:{
                cout<<"Inside Problem 3 Gaddis - Ocean Levels"<<endl;
                    //Declaration of Variables
                    float riseRat=1.5; //The ocean's rise rate. 1.5 millimeters each year
                    float risen; //How much has the ocean risen?
                    int year=0; //The starting year of the prediction

                    //Process values and display output
                    cout<<"year"<<"     "<<"Ocean has risen->"<<endl;
                    for (int i=year; i<=25; i++){//We are at the first year, are we at the 25th year? if not, go to the next year, if so, get out of loop
                        risen=riseRat*year;  //Calculate how much the ocean has rose
                        cout<<year<<"        "<<risen<<"mm"<<endl; //output line of table
                        year++;  //increase year by 1

                    }
                break;
            }
            case 3:{
                cout<<"Inside Problem 4 Gaddis - Calories Burned"<<endl;
                    //Declaration of Variables
                   float cpm=3.6; //calories per minute burned on a treadmill
                   float burned;  //calories burned
                   int counter=1;

                   //Process values and Output
                   while (counter<7){
                       burned=cpm*counter*5; //calculate the amount of calories burned after so many minutes
                       cout<<"calories burned: "<<burned<<"     minutes elapsed:  "<<counter*5<<endl;
                       counter++;
                    }
                break;
            }
            case 4:{
                cout<<"Inside Problem 5 Gaddis - Membership Fees"<<endl;
                    //Declare all Variables Here
                    int incRate=4;    //The rate in percentage that the country club will increase its price annually
                    int cost=2500; //The price in dollars of the membership
                    int year=1;       //Initial year equals 0
                    int incAmt;       //The amount that is being added to the fee

                    //Input or initialize values Here

                    //Process/Calculations/Display Here
                    for(int i=year;i<7;i++){   //calculate the membership fees for different years 
                        incAmt=(cost*incRate)/100;
                        cost=incAmt+cost;
                        cout<<"New cost of Annual Membership for year "<<year<<" : $"<<cost<<endl;
                        year++;
                    }
                break;
            }
            case 5:{
                cout<<"Inside Problem 6 Gaddis - Distance Traveled"<<endl;
                    //Declaration of Variables
                    int v, t, d, iTime=1; //V=speed(mph) t=time(hours) d=distance(miles) iTime=initial time


                    //Prompt user for inputs
                    cout<<"This program determines how far a vehicle traveled"<<endl;
                    cout<<"Enter the speed of a vehicle in miles per hour"<<endl;
                    cin>>v;
                    cout<<"Enter the time(hours) the vehicle was traveling at the previous speed"<<endl;
                    cin>>t;
                    //Process values -> Map inputs to Outputs
                    cout<<" Hour       Distance Traveled"<<endl;
                    cout<<"______________________________"<<endl;
                    for(int i=iTime; i<=t; i++){
                        d=i*v;

                    cout<<"  "<<i<<"             "<<d<<" miles"<<endl;
                    } 
                break;
            }
            case 6:{
                cout<<"Inside Problem 7 Gaddis - Pennies For Pay"<<endl;
                    //Declaration of Variables
                    int days; //How many days will we be looking at for evaluating
                    int first; //First day of pay
                    float salary=1; //Salary 
                    float output;  //salary that is shown

                    //prompt user for inputs
                    cout<<"This program shows you earned income if you start with a one-"<<endl;
                    cout<<"-penny salary and double it every day"<<endl;
                    cout<<"Enter the amount of days(1-31)"<<endl;
                    cin>>days;


                    //Validate input
                    while(days<1||days>31){
                        cout<<"Error: Enter a number between 1 and 31"<<endl;
                        cin>>days;
                    }
                        //Output salary table    
                        if (days==1){
                            salary=1;
                        }else
                            cout<<"Day"<<"     "<<"Pay"<<endl;
                        cout<<"1       $0.01"<<endl;
                            for(int i=2;i<=days;i++){
                                salary=salary*2;
                                output=salary/100;
                                cout<<i<<"       $"<<fixed<<setprecision(2)<<output<<endl;
                    }
                break;
            }
            case 7:{
                cout<<"Inside Problem 9 Gaddis - Hotel Occupancy"<<endl;
                    //Declaration of Variables
                    int floors; //number of floors
                    int uRoom; //unoccupied room
                    int oRoom; //occupied room
                    int room;  //number of rooms per floor
                    int totRoom=0; //Total amount of rooms
                    int occTot=0; //Total number of occupied rooms
                    float prcntO; //Percentage of rooms that are occupied

                    //Prompt for floor number
                    cout<<"How many floors does the hotel have?"<<endl;
                    cin>>floors;

                    //validate input
                    while(floors<1){
                        cout<<"Error: number of floors invalid"<<endl;
                        cout<<"Enter the number of floors the hotel has."<<endl;
                        cin>>floors;
                    }

                    //Loop to determine each floor's stats
                    for(int i=1;i<=floors;i++){
                        if(i==13)continue; //skip floor 13
                        cout<<"Enter number of rooms for floor "<<i<<endl;
                        cin>>room;
                        while (room<10){     //Validate room input
                            cout<<"Error: Wrong number of rooms entered. Each floor must have at least 10 rooms"<<endl;
                            cin>>room;
                        }
                        //Calculate total room tally
                        totRoom=totRoom+room;

                        cout<<"How many of these rooms are occupied?"<<endl; //Determine occupied rooms on that floor
                        cin>>oRoom;
                        while (oRoom>room){     //Validate the occupied room input
                            cout<<"Error: There are more occupied rooms that there are rooms"<<endl;
                            cout<<"Re-enter the number of occupied rooms"<<endl;
                            cin>>oRoom;
                        }
                        //Calculate the total occupied room tally
                        occTot=occTot+oRoom;
                    }

                    //Calculate unoccupied rooms
                    uRoom=totRoom-occTot;

                    //Calculate percentage of occupied rooms
                    prcntO=((occTot*100)*100)/(totRoom*100);

                    //Display Output
                    cout<<"Total Rooms: "<<totRoom<<endl;
                    cout<<"Total Occupied Rooms: "<<occTot<<endl;
                    cout<<"Total Unoccupied Rooms: "<<uRoom<<endl;
                    cout<<"Percentage of rooms that are occupied: "<<prcntO<<"%"<<endl;
                break;
            }
            case 8:{
                cout<<"Inside Problem 10 Gaddis - Average Rainfall"<<endl;
                    //Declaration of Variables
                    int years; //number of years
                    int rain1; //rainfall for a month
                    float totRain; //total rainfall
                    float aveRain;  //number of rooms per floor
                    int totRoom=0; //Total amount of rooms
                    int occTot=0; //Total number of occupied rooms
                    float prcntO; //Percentage of rooms that are occupied

                    //Prompt for how many years
                    cout<<"Enter number of years of rainfall"<<endl;
                    cin>>years;

                    //validate input
                    while(years<1){
                        cout<<"Error: number of years invalid"<<endl;
                        cout<<"Enter the number of years you want an average of."<<endl;
                        cin>>years;
                    }

                    //Loop to determine each year's average
                    for(int i=1;i<=(years*12);i++){
                        cout<<"Enter rainfall in inches for month "<<i<<endl;
                        cin>>rain1;
                        while (rain1<0){     //Validate rainfall input
                            cout<<"Error: You cant have negative rainfall"<<endl;
                            cin>>rain1;
                        }
                        //Calculate total rain fall
                        totRain=totRain+rain1;


                    }

                    //Calculate average rainfall per month
                    aveRain=totRain/(years*12);

                    //Display Output
                    cout<<"Total Rainfall: "<<totRain<<" inches"<<endl;
                    cout<<"Number of Months: "<<years*12<<endl;
                    cout<<"Average Rainfall per Month: "<<aveRain<<" inches"<<endl;
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}