#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    float one=0,two=0,three=0,four=0,five=0,six=0;
    srand(time(0));

    for(int i=1;i<1001;i++)
    {
        int number =(rand()%10+1);

        if(number==1)
        {
            one++;
            cout<<"第"<<i<<"次"<<"為"<<number<<"\n";
        }
        else if(number==2)
        {
            two++;
            cout<<"第"<<i<<"次"<<"為"<<number<<"\n";
        }
        else if(number==3)
        {
            three++;
            cout<<"第"<<i<<"次"<<"為"<<number<<"\n";
        }
        else if(number==4)
        {
            four++;
            cout<<"第"<<i<<"次"<<"為"<<number<<"\n";
        }
        else if(number==5)
        {
            five++;
            cout<<"第"<<i<<"次"<<"為"<<number<<"\n";
        }
        else
        {
            six++;
            cout<<"第"<<i<<"次"<<"為6\n";
        }
    }
    cout<<"\n";
    cout<<"1骰出"<<one<<"次"<<"機率為"<<one/1000<<"\n";
    cout<<"2骰出"<<two<<"次"<<"機率為"<<two/1000<<"\n";
    cout<<"3骰出"<<three<<"次"<<"機率為"<<three/1000<<"\n";
    cout<<"4骰出"<<four<<"次"<<"機率為"<<four/1000<<"\n";
    cout<<"5骰出"<<five<<"次"<<"機率為"<<five/1000<<"\n";
    cout<<"6骰出"<<six<<"次"<<"機率為"<<six/1000<<"\n";
}
