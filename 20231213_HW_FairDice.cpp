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

        cout<<"��"<<i<<"��"<<"��"<<(rand()%6+1)<<"\n";
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
    cout<<"1��X"<<one<<"��"<<"���v��"<<one/1000<<"\n";
    cout<<"2��X"<<two<<"��"<<"���v��"<<two/1000<<"\n";
    cout<<"3��X"<<three<<"��"<<"���v��"<<three/1000<<"\n";
    cout<<"4��X"<<four<<"��"<<"���v��"<<four/1000<<"\n";
    cout<<"5��X"<<five<<"��"<<"���v��"<<five/1000<<"\n";
    cout<<"6��X"<<six<<"��"<<"���v��"<<six/1000<<"\n";
}
