#include<iostream>
using namespace std;
class A
{
int x;
public:
A(int a)
{
    x=a;
    cout<<"\nCalling base class parameterized "<<x;
}
~A()
{
cout<<"\nCalling base class destructor";
}
};
class B:public A
{
int l;
public:
B(int p):A(p)
{
l=p;
cout<<"\nCalling derived class parameterized:"<<l;
}
~B()
{
cout<<"\nCalling derived class destructor";
}
};
int main()
{
B obj2(1);
return 0;
}
Output:
Calling base class parameterized 1
Calling derived class parameterized: 1
Calling derived class destructor
Calling base class destructor







