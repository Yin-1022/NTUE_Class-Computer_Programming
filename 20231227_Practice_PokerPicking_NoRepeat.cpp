#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int card[53]={0};
    int pick;
    int number;
    int pattern;
    int counter=0;
    srand(time(0));

    for(int i=1;i<200;i++)
    {
        pick =(rand()%52);

        if((card[pick+1]==1))
        {
            i--;
        }
        else if(card[pick+1]!=1)
        {
            card[pick+1]={1};
            cout<<i<<".抽到";
            counter++;
            if(pick/13==0) //0~12
            {
                cout<<"梅花"<<pick%13+1<<" counter="<<counter<<"\n";
            }
            else if(pick/13==1) //13~25
            {
                cout<<"黑桃"<<pick%13+1<<" counter="<<counter<<"\n";
            }
            else if(pick/13==2)// 26~38
            {
                cout<<"紅心"<<pick%13+1<<" counter="<<counter<<"\n";
            }
            else if(pick/13==3) //39~51
            {
                cout<<"方塊"<<pick%13+1<<" counter="<<counter<<"\n";
            }
        }

        if(counter==52)
        {
            cout<<"52張牌皆已抽完";
            return 0;
        }
    }
}
