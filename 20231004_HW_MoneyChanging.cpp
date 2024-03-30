#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j; //2000, 1000, 500, 200, 100, 50, 20, 10, 5, 1
    int amount; // 輸入的錢
    int A1;

    cout<<"請輸入金額: ";
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

    cout<<endl <<"你輸入了"<<amount<<"元"<<"，共取得";
    cout<<endl << "2000元" << a << "張";
    cout<<endl << "1000元" << b << "張";
    cout<<endl << "500元 " << c << "張";
    cout<<endl << "200元 " << d << "張";
    cout<<endl << "100元 " << e << "張";
    cout<<endl << "50元  " << f << "個";
    cout<<endl << "20元  " << g << "個";
    cout<<endl << "10元  " << h << "個";
    cout<<endl << "5元   " << i << "個";
    cout<<endl << "1元   " << j << "個";
}
