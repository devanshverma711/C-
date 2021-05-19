#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void getdata();
    void putdata();
};
void stu :: getdata()
{
    cout<<"enter id and name ";
    cin>>id>>name;
}
void stu :: putdata()
{
    cout<<id<<"\t"<<name<<endl;
}
int main()
{
    stu S[60];
    int n,i;
    cout<<"Enter no.";
    cin>>n;
    if(n<1 || n>60)
    {
        cout<<"value 1-60 only";
    }
    else
    {
        for (i=0;i<n;i++) 
        {
            S[i].getdata();
            cout<<"ID \t Name \n";
            cout<<"-----------------------------------\n";
        }
        for (i=0;i<n;i++) 
        {
            S[i].putdata();
        }
    }
    getch();
}