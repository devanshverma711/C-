#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
    int id;
    char name[20];
    float sal;
    void getemp()
    {
        cout<<"Enter emp id,name,salary ";
        cin>>id>>name>>sal;
    }
    public:
    void putemp()
    {
        getemp();
        cout<<"Id - "<<id<<endl<<"Name - "<<name<<endl<<"Salary - "<<sal;
    }
};
int main()
{
    emp e;
    e.putemp();
    getch();
}