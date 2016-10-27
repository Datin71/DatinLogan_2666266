/* 
 * File:   main.cpp
 * Author: Logan Datin  
 * Created on October 24, 2016, 8:20 AM
 * Purpose:  You are a rescue diver trying to save as many people as possible
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void genNum(); //Generate Random number
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int clock=100,       //How much time you have before the boat sinks
        energy=50,      //energy you have
        tool1=0,        //knife, prybar, oxygen bottle
        tool2=0;        //lifejacket, fins, flaregun
    int saved=0;          //People saved
    string name;        //Name of user
    int dec1;        //Decide to get first meal
    int dec2;        //Decide which tool package to get
    int dec3;           //Decide to leave someone and come back later or help them now
    int dec4;           //Decide to swim or shoot the flare
    int action;     //Pauses program and waits for user input
    
    //Door code problem variables
    int num,    //the number
        guess,  //user guess
        atmpt=20;  //how many tries they are allowed to have
    
    //initialize clock
    srand (time(0)); 

    //Start Story
    cout<<"#You enter briefing room and take a seat#"<<endl;
    cout<<"#Officer walks in room#"<<endl;
    cout<<"OFFICER: OK so here is the lowdown. We've got a small fishing vessel that is"<<endl;
    cout<<" taking on water. There are 4 people on board and 3 in the water. We need you and your partner to rescue them"<<endl;
    cout<<" before it goes down. What is your name?"<<endl;
    getline(cin,name);
    cout<<"#Your partner walks in to talk to you#"<<endl;
    cout<<"PARTNER: I'll be assisting you "<<name<<". we are running low on time so do what you need then get on the chopper"<<endl;
    
    //Present option to get food or not?
    cout<<"#You didn't have breakfast and think you might need the energy, but time is running out#"<<endl;
    cout<<"PARTNER: Do you wanna grab a small meal or keep going? enter [1]meal [2]no meal"<<endl;
    cin>>dec1;
    if (dec1==1){
        energy=60;
        clock=80;
        cout<<"PARTNER: Ok now we are dangerously low on time"<<endl;
    }
    
    //choose tools
    cout<<"PARTNER: "<<name<<" quickly, choose what tools you want."<<endl;
    cout<<"Enter [1] for tool package 1 and [2] for tool package 2"<<endl;
    cout<<"Tool Package1: Knife, prybar, oxygen bottle - geared towards rescue on the boat"<<endl;
    cout<<"Tool Package2: Lifejacket, fins, flaregun - geared towards swimming rescue"<<endl;
    cin>>dec2;
    if (dec2==1){ //tool package 1
        tool1=1;
        cout<<"PARTNER: Great, you get on board the ship and get the ones back from there, "<<endl;
        cout<<"I'll grab the ones that went overboard - NOW LETS GO!!!"<<endl;
    }
    if (dec2==2){ //tool package 2
        tool2=1;
        cout<<"PARTNER: Great, you jump in the water and save the ones overboard, "<<endl;
        cout<<"I'll grab the ones on the boat - NOW LETS GO!!!"<<endl;
    }
    
    //Get to boat via chopper
    cout<<"#You and your partner board the chopper"<<endl;
    cout<<"#You arrive on the scene, 10 people are on the boat and 6 are in the water#"<<endl;
    cout<<"Enter [1] to descend to the scene"<<endl;
    cin>>action;
    
    //Save a person
    cout<<"#One person immediately comes up to you#"<<endl;
    cout<<"Enter [1] to help the person into the rescue basket and raise it"<<endl;
    cin>>action;
    saved=saved+1;
            
    //Proceed to tool package 1 path
    if (tool1==1){
        cout<<"#You look around the ship to find another person#"<<endl;
        cout<<"#Hear screaming coming from inside the control room#"<<endl;
        cout<<"#There is a lock on the door with a passcode#"<<endl;
        cout<<"#To gain access, you must guess the correct number 1-100#"<<endl;
        
        num=rand()%100+1;
        for (int i=0;num!=guess&&i<=atmpt;i++){    
            cin>>guess;
            if (num==guess){
                cout<<"#Good job! You open the door and save this person#"<<endl;
                cout<<"#Press [1] to lift the person up the basket"<<endl;
                cin>>action;
                saved=saved+1;}
            if (num>guess){
                cout<<"Your guess is too low"<<endl;
                //cin>>guess;
            }
            if (num<guess){
                cout<<"Your guess is too high"<<endl;
                //cin>>guess;
            }
            if (i==atmpt){
                cout<<"#TOO LONG! Give up and get out! The Chopper is leaving!#"<<endl;
                cout<<"GAME OVER"<<endl;
            }
            clock-=5;
            }
     }
    
    //Proceed along tool package 1 path
    if (tool1==1&&clock>30){
        cout<<"#You search for more people#"<<endl;
        cout<<"#You come across someone that is knocked out#"<<endl;
        cout<<"#This person will take significant time. Press [1] to save, [2] to leave#"<<endl;
        cin>>action;
        if (action==1){
            cout<<"#Press [1] to administer oxygen and perform CPR#"<<endl;
            cin>>action;
            clock-=30;
            cout<<"#Good job. There should be one more person on board#"<<endl;
            saved=saved+1;
        }
        if (action==2){
            cout<<"#We need to save the other person on board, if there is extra time, we will come back#"<<endl;
        }
    }
    
    //proceed along tool package 1 path
    if (tool1==1&&clock>30){
        cout<<"#You hear someone screaming and rush to them#"<<endl;
        cout<<"#They are trapped under a large fishing net#"<<endl;
        cout<<"#Press [1] to cut them out with your knife#"<<endl;
        cin>>action;
        clock-=30;
        cout<<"#The person thanks you and you lift them up. Press [1]"<<endl;
        cin>>action;
        saved=saved+1;
    }
    
    //go back and save the one you left behind
    if (tool1==1&&clock>=30){
        cout<<"#Go back to the knocked out guy we left behind#"<<endl;
        cout<<"#Press [1] to give CPR and administer oxygen"<<endl;
        cin>>action;
        clock-=50;
        saved=saved+1;
    }
    
    //Go back to chopper
    if (clock<30){
        cout<<"#Time is up. Back to the CHOPPER!#"<<endl;
    }
            
    //Tool package 2 pathway
    if (tool2==1){
        cout<<"#After the first person is saved you #"<<endl;
        cout<<"#Immediately find someone drowning#"<<endl;
        cout<<"Press [1] to give them your life jacket"<<endl;
        cin>>action;
        cout<<"#Do you want to use your energy to get them in the basket or swim to the next person?#"<<endl;
        cout<<"#Press [1] to leave them for later, Press [2] to help them up#"<<endl;
        cin>>dec3;
        if (dec3==1){
            cout<<"#You swim far away to get the next person. This uses lots of energy#"<<endl;
            energy-=30;
            cout<<"#The chopper loses sight of you and you need to decide.#"<<endl;
            cout<<"#Do you want to swim all the way back[1] or shoot the flare gun [2]#"<<endl;
            cout<<"#to have the chopper come back to you?#"<<endl;
            cin>>dec4;
            saved=saved+1;
            if (dec4==1&&energy>=30){
                cout<<"#You swim all the way back and help the two guys into the bucket#"<<endl;
                cout<<"#You go back to the chopper and meet your partner#"<<endl;
                saved=saved+1;
            }
            if (dec4==1&&energy<30){
                cout<<"#You swim all the way back but you do not have the energy to get the first guy in the basket#"<<endl;
                cout<<"#Unfortunately, someone died, life will go on, but you cant forget it#"<<endl;
            }
            if (dec4==2){
                cout<<"#You shoot the flare gun, and luckily, the first person was able to get inside the basket#"<<endl;
                cout<<"#Press [1] to help the other guy into the basket#"<<endl;
                cin>>action;
                cout<<"#You go back up to the chopper and meet your partner#"<<endl;
                saved=saved+1;
            }
        }
        if (dec3==2){
            cout<<"#The person is fat and takes a lot of effort to get them in the basket#"<<endl;
            energy-=30;
            saved=saved+1;
            if (energy<30){
                cout<<"#You have used too much energy to get the person far away in the ocean,"<<endl;
                cout<<"#Unfortunately, someone died, life will go on, but you cant forget it#"<<endl;
            }
            if (energy>=30){
                cout<<"#Luckily you have enough energy to go get the other person#"<<endl;
                cout<<"#Press [1] to start swimming#"<<endl;
                cin>>action;
                cout<<"#The chopper has lost sight of you. Press [1] to shoot flare gun#"<<endl;
                cin>>action;
                cout<<"#The chopper picks you up, you save the person, and you meet your partner back there#"<<endl;
                saved=saved+1;
                
            }
        }
    }

    //Output Located Here
    cout<<name<<", you saved: "<<saved<<" people"<<endl;
    if (tool2==1){
        switch (saved){
            case 1:cout<<"2 people died at your hands. Game over";break;
            case 2:cout<<"1 person died at your hands. Game over";break;
            case 3:cout<<"Everyone was saved. Good job, get ready for tomorrow";
        }
    }
    if (tool1==1){
        switch (saved){
            case 1:cout<<"3 people died at your hands. Game over";break;
            case 2:cout<<"2 people died at your hands. Game over";break;
            case 3:cout<<"1 person died at your hands. Game over";break;
            case 4:cout<<"Everyone was saved. Good job, get ready for tomorrow";
        }
    }
    
    

    //Exit
    return 0;
}


//Generate Random number



