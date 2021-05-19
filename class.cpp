#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
    int id;
    char name[20];
    public :
    void readstu()
    {
        cout<<"enter your id,name";
        cin>>id>>name;
    }
    void showstu();
};
void stu::showstu()
{
    cout<<"stu id = "<<id<< endl ;
    cout<<"Name = "<<name;
}
int main()
{
    stu S;
    S.readstu();
    S.showstu();
    getch();
}
