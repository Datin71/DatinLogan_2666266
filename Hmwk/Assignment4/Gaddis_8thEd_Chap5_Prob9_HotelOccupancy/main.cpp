/* 
   File:   main
   Author: Logan Datin
   Created on October 17, 2016, 6:49 PM
   Purpose:  Determine capacity for a hotel
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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
        while (room<1){     //Validate room input
            cout<<"Error: Wrong number of rooms entered."<<endl;
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

    //Exit Program
    return 0;
}