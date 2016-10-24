/* 
 * File:   main.cpp
 * Author: Logan Datin  
 * Created on October 24, 2016, 8:20 AM
 * Purpose:  You are a rescue diver trying to save as many people as possible
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int time=100,       //How much time you have before the boat sinks
        health=50,      //How much health you have
        energy=50,      //energy you have
        food=0,         //food adds to health, but takes away time
        dead=20,        //People dead
        tool1=0,        //knife, prybar, oxygen bottle
        tool2=0;        //lifejacket, fins, flaregun
    string name;        //Name of user
    int dec1;        //Decide to get first meal
    int dec2;        //Decide which tool package to get
    
    //Start Story
    cout<<"#You enter briefing room and take a seat#"<<endl;
    cout<<"#Officer walks in room#"<<endl;
    cout<<"OFFICER: OK so here is the lowdown. We've got a small fishing vessel that is"<<endl;
    cout<<" taking on water. There are 20 people on board. We need you and your partner to get as many people off"<<endl;
    cout<<" the boat as possible before it goes down. What is your name?"<<endl;
    getline(cin,name);
    cout<<"#Your partner walks in to talk to you#"<<endl;
    cout<<"PARTNER: I'll be assisting you "<<name<<". we are running low on time so do what you need then get on the chopper"<<endl;
    
    //Present option to get food or not?
    cout<<"#You didn't have breakfast and think you might need the energy, but time is running out#"<<endl;
    cout<<"PARTNER: Do you wanna grab a small meal or keep going? enter [1]meal [2]no meal"<<endl;
    cin>>decide1;
    if (decide1==1){
        energy=60;
        time=90;
        cout<<"PARTNER: Ok now we are dangerously low on time"<<endl;
    }
    
    //choose tools
    cout<<"PARTNER: "<<name<<" quickly, choose what tools you want."<<endl;
    cout<<"Enter [1] for tool package 1 and [2] for tool package 2"<<endl;
    cout<<"Tool Package1: Knife, prybar, oxygen bottle - geared towards rescue on the boat"<<endl;
    cout<<"Tool Package2: Lifejacket, fins, flaregun - geared towards swimming rescue"<<endl;
    cin>>dec2;
    
    
    //Process/Calculations Here
    cout<<time<<endl;
    cout<<energy<<endl;
    //Output Located Here
    

    //Exit
    return 0;
}



