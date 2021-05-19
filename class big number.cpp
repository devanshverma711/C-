#include<iostream>
#include<conio.h>
using namespace std;
class BIG
{
    int a,b;
    public:
    void readdata()
    {
        cout<<"enter value a,b";
        cin>>a>>b;
    }
    void showdata()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    int big()
    {
        if(a>b)
        return a;
        else
        return b;
    }
};
int main()
{
    BIG b;
    b.readdata();
    b.showdata();
    int max=b.big();
    cout<< max <<" is bigger ";
    getch();
}