#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

int main()
{

    int a,b,c,i;

    cout<<"Please enter the first value: ";
    cin>>a;
    cout<<"\n"<<"Please enter the second value : ";
    cin>>b;
    cout<<"\n"<<"Please enter the third value: ";
    cin>>c;

    cout<<"\nThe first value is: "<<a;
    cout<<"\nThe second value is: "<<b;
    cout<<"\nThe third value is: "<<c;

    if(b>=a)
    {
        exchange(a,b);
    }

    if(c>=a)
    {
        exchange(a,c);
    }

    if(c>=b)
    {
        exchange(b,c);
    }

    cout<<endl;
    cout<<"\nThe result is: "<<a<<">="<<b<<">="<<c<<"\n";

    return 0;

}
