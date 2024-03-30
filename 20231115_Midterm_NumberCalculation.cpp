#include <iostream>
using namespace std;

int main()
{
    float n;
    cout<<"Enter an integral number of how many numbers you want to input: ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Sum = 0 , Average = 0";
        return 0;
    }
    if(n!=int(n))
    {
        cout<<"Do not enter a non-integral number";
        return 0;
    }

    cout<<endl;
    int a;
    int sum=0;
    int i;

    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>a;
        sum=sum+a;
        cout<<endl;
    }

    float average=sum/n;

    cout<<"The sum of these "<<n<<" numbers is : "<<sum<<" , and the average is : "<<average<<endl;

    return 0;
}
