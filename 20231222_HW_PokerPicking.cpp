#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int clover[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int diamond[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int spade[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int heart[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int Ccounter,Dcounter,Scounter,Hcounter;

    srand(time(0));

    for(int i=1;i<60;i++)
    {
        int number =(rand()%13+1);
        int pattern =(rand()%4+1);

        if(pattern==1)
        {
            if(clover[number]!=0)
            {
                cout<<"抽到重複的"<<"梅花"<<number<<"\n";
                continue;
            }
            cout<<"抽出梅花"<<number<<"\n";
            clover[number]++;
        }
        else if(pattern==2)
        {
            if(diamond[number]!=0)
            {
                cout<<"抽到重複的"<<"菱形"<<number<<"\n";
                continue;
            }
            cout<<"抽出菱形"<<number<<"\n";
            diamond[number]++;
        }
        else if(pattern==3)
        {
            if(spade[number]!=0)
            {
                cout<<"抽到重複的"<<"黑桃"<<number<<"\n";
                continue;
            }
            cout<<"抽出黑桃"<<number<<"\n";
            spade[number]++;
        }
        else if(pattern==4)
        {
            if(heart[number]!=0)
            {
                cout<<"抽到重複的"<<"紅心"<<number<<"\n";
                continue;
            }
            cout<<"抽出紅心"<<number<<"\n";
            heart[number]++;
        }
    }
}
