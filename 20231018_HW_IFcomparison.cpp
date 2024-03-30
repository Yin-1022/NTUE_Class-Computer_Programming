#include <iostream>
using namespace std;

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
        i=a;
        a=b;
        b=i;
    }

    if(c>=a)
    {
        i=c;
        c=a;
        a=i;
    }

    if(c>=b)
    {
        i=c;
        c=b;
        b=i;
    }

    cout<<endl;
    cout<<"\nThe result is: "<<a<<">="<<b<<">="<<c<<"\n";

    return 0;

}
