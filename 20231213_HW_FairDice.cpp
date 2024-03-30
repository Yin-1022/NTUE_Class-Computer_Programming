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
        int number =(rand()%6+1);

        cout<<"第"<<i<<"次"<<"為"<<(rand()%6+1)<<"\n";
        if(number==1)
        {
            one++;
        }
        else if(number==2)
        {
            two++;
        }
        else if(number==3)
        {
            three++;
        }
        else if(number==4)
        {
            four++;
        }
        else if(number==5)
        {
            five++;
        }
        else if(number==6)
        {
            six++;
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
