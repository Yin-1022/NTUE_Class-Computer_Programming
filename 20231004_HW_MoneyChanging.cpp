#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j; //2000, 1000, 500, 200, 100, 50, 20, 10, 5, 1
    int amount; // ��J����
    int A1;

    cout<<"�п�J���B: ";
    cin>>amount;

    a = amount/2000;
    A1 = amount-a*2000;
    b = A1/1000;
    A1 = A1-b*1000;
    c = A1/500;
    A1 = A1-c*500;
    d = A1/200;
    A1 = A1-d*200;
    e = A1/100;
    A1 = A1-e*100;
    f = A1/50;
    A1 = A1-f*50;
    g = A1/20;
    A1 = A1-g*20;
    h = A1/10;
    A1 = A1-h*10;
    i = A1/5;
    A1 = A1-i*5;
    j = A1/1;
    A1 = A1-j*1;

    cout<<endl <<"�A��J�F"<<amount<<"��"<<"�A�@���o";
    cout<<endl << "2000��" << a << "�i";
    cout<<endl << "1000��" << b << "�i";
    cout<<endl << "500�� " << c << "�i";
    cout<<endl << "200�� " << d << "�i";
    cout<<endl << "100�� " << e << "�i";
    cout<<endl << "50��  " << f << "��";
    cout<<endl << "20��  " << g << "��";
    cout<<endl << "10��  " << h << "��";
    cout<<endl << "5��   " << i << "��";
    cout<<endl << "1��   " << j << "��";
}
