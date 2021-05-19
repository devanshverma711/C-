#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
    float r;
    public:
    circle()
    {
        r=5;
    }
    circle(float r)
    {
        (*this).r=r;
    }
    void showdata()
    {
        cout<<"area is "<<3.15*r*r<<endl;
    } 
};
int main()
{
    circle c1;
    circle c2(10);
    c1.showdata();
    c2.showdata();
    getch();
}