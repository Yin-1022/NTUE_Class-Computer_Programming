#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int menu(int choice)
{
    cout<<"¡@Menu for Simulation\n"<<"1.Game 1(Dice Game)\n"<<"2.Game 2(Poker Game)\n"<<"0.Exit\n\n"<<"¡@Please select a choice among 0,1,2: ";
    cin>>choice;
    cout<<"\n";

    if(choice==0)
    {
        return choice;
    }
    else if(choice==1)
    {
    	return choice;
	}
	else if(choice==2)
    {
    	return choice;
	}
    else if(choice!=0 && choice!=1 && choice!=2)
    {
            cout<<"¡@Please do not enter option other than 0,1,2\n\n";
    }
}

void game1()
{
    srand(time(0));

    int playerNumber =(rand()%6+1);
    int pcNumber =(rand()%6+1);

    cout<<"¡@Player:"<<playerNumber<<"¡@PC:"<<pcNumber<<"\n";

    if(playerNumber==pcNumber)
    {
    	cout<<"¡@Game result: Tie\n\n";
	}
	else if(playerNumber>pcNumber)
	{
		cout<<"¡@Game result: The player wins. The PC loses.\n\n";
	}
	else if(playerNumber<pcNumber)
	{
		cout<<"¡@Game result: The PC wins. The player loses.\n\n";
	}
}

void game2()
{
	srand(time(0));

	int getPlayer=rand()%52;
	int getPC=rand()%52;
	while(getPlayer==getPC)
	{
		getPlayer=rand()%52;
		getPC=rand()%52;
	}
	int playerNumber =(getPlayer%13+1);
	int playerPattern =(getPlayer/13);
	int pcNumber =(getPC%13+1);
	int pcPattern =(getPC/13);
	string spade = "Spade"; //0~12
	string heart = "Heart"; //13~25
	string diamond = "Diamond"; //26~38
	string clover = "Clover"; //39~51

	cout<<"¡@Player: ";
	if(playerPattern==3)
	{
        cout<<spade<<" "<<playerNumber;
	}
	else if(playerPattern==2)
	{
		cout<<heart<<" "<<playerNumber;
	}
	else if(playerPattern==1)
	{
		cout<<diamond<<" "<<playerNumber;
	}
	else if(playerPattern==0)
	{
		cout<<clover<<" "<<playerNumber;
	}

	cout<<"¡@PC: ";
	if(pcPattern==3)
	{
		cout<<spade<<" "<<pcNumber;
	}
	else if(pcPattern==2)
	{
		cout<<heart<<" "<<pcNumber;
	}
	else if(pcPattern==1)
	{
		cout<<diamond<<" "<<pcNumber;
	}
	else if(pcPattern==0)
	{
		cout<<clover<<" "<<pcNumber;
	}

	cout<<"\n";

	if(playerNumber>pcNumber)
	{
		cout<<"¡@Game result: The player gets higher point, so the player wins and the PC loses.\n\n";
	}
	else if(playerNumber<pcNumber)
	{
		cout<<"¡@Game result: The PC gets higher point, so the PC wins and the player loses.\n\n";
	}
	else if(playerNumber==pcNumber)
	{
		if(playerPattern>pcPattern)
		{
			cout<<"¡@Game result: Both the player and PC get the same point, but player gets larger pattern, so the player wins and the PC loses\n\n";
		}
		else if(playerPattern<pcPattern)
		{
			cout<<"¡@Game result: Both the player and PC get the same point, but PC gets larger pattern, so the PC wins and the player loses\n\n";
		}
	}
}

int main()
{
    int choice;
    int i=1;

    while(i!=0)
    {
        i=menu(choice);

        if(i==1)
    	{
    		game1();
		}
		else if(i==2)
		{
    		game2();
		}
    }

    if(i==0)
    {
        cout<<"¡@Exit the game";
        return 0;
    }
}
