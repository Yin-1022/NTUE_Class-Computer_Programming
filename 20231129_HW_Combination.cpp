#include <iostream>
using namespace std;

int f(int m)
{
    int s=1;
    for(int i=1;i<=m;i++)
    {
        s=s*i;
    }

    return s;
}

int main()
{
    int m;
    int n;

    cout<<"Cm取n，請輸入"<<endl<<"m = ";
    cin>>m;
    if(m<0)
    {
        cout<<"m不可小於0";
        return 0;
    }

    cout<<endl<<"n = ";
    cin>>n;
    if(n<0)
    {
        cout<<"n不可小於0";
        return 0;
    }
    if(m<n)
    {
        cout<<endl<<"C"<<m<<"取"<<n<<"= 0";
        return 0;
    }

    if(m>0 && n>0)
        cout<<endl<<"C"<<m<<"取"<<n<<"= "<<f(m)/(f(n)*f(m-n));
    else
        cout<<endl<<"C"<<m<<"取"<<n<<"= 1";

}
