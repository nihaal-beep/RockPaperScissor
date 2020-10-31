#include<iostream>
#include<stdlib.h>
#include <ctime>
#include <map>
using namespace std;
int main()
{
    map<int , string> dict;
    dict [0]= "STONE";
    dict [1]= "PAPER";
    dict [2]= "SCISSOR";
    int t;
    t= time (NULL);
    srand(t);
    int opnum;
    int usnum;
    int opscore=0;
    int usscore=0;
    int cntrl =1;
    while (cntrl =1)
    {
        opnum = rand() % 3;
        cout<<"ENTER 0 FOR STONE"<<endl;                
        cout<<"ENTER 1 FOR PAPER"<<endl;
        cout<<"ENTER 2 FOR SCISSOR"<<endl;
        cout <<"-------------------------------------------------------------------"<<endl;
        cin>>usnum;
        switch (usnum)
        {
            case 0:
            if (opnum==1)
            opscore++; 
            else if (opnum==2)
            usscore++;
            break;
            case 1:
            if (opnum==0)
            usscore++;
            else if (opnum==2)
            opscore++;
            break;
            case 2:
            if (opnum==0)
            opscore++;    
            else if (opnum==1)
            usscore++;
            break;
            default :
            cout <<"WRONG CHOICE ENTERED"<<endl;
        }
        cout<<"YOUR CHOICE IS - "<<dict[usnum]<<endl;        
        cout<<"OPPONENT'S CHOICE IS - "<<dict[opnum]<<endl;
        cout<<"YOUR SCORE IS - "<<usscore<<endl;
        cout<<"OPPONENT'S SCORE IS - "<<opscore<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
        if (usscore ==5 )
        {
            cout<<"YOU WON!"<<endl;
            break;
        }
        else if (opscore ==5)
        {
            cout <<"YOU LOST!"<<endl;
            break;
        }

    } 
    
}
        
