#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char name[10];
};

int main ()
{
    struct rectangle r1;
    struct rectangle *p=&r1;
    cout<<"Enter the Name of the rectangle:"<<endl;
    cin>>r1.name;
    cout<<"Enter the Length of the rectangle:"<<endl;
    cin>>r1.length;
    cout<<"Enter the breath of the rectangle:"<<endl;
    cin>>r1.breadth;

    cout<<r1.name;
    cout<<endl;
    cout<<r1.length;
    cout<<endl;
    cout<<r1.breadth;
    cout<<endl;

    cout<<p->length;
    cout<<endl;
    cout<<p->breadth;
    cout<<endl;

    //cout<<"The Area of the rectangle is "<< r1.length * r1.breadth<<endl;
   return 0;
}