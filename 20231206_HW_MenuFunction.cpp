#include<iostream>
using namespace std;

int menu(int choice)
{

    cout<<"Menu\n"<<"1.Add a new file\n"<<"2.Search the files\n"<<"3.Edit the files\n"<<"0.Exit the menu\n\n"<<"Please enter options from 0~3: ";
    cin>>choice;
    cout<<"\n";


    if(choice==0)
    {
        return choice;
    }

    if(choice!=0 && choice!=1 && choice!=2 && choice!=3)
    {
            cout<<"Do not enter options aside from 0 to 3 \n";
    }
}

int main()
{
    int choice;
    int i=1;

    while(i!=0)
    {
        i=menu(choice);
    }

    if(i==0)
    {
        cout<<"Exit the menu...";
        return 0;
    }
}
