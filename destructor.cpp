#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    int a,b;
    public:
    sample()
    {
        a=10;
        b=15;
    }
    ~sample()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        getch();
    }
};
int main()
{
    sample S;
}