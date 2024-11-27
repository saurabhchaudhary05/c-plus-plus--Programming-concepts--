#include<iostream.h>
class B
{
int a;  	//private not inheritable
public: //ready for inheritance
int b;
void get_ab();
int get_a();
void show_a();
};
class D:private B	//private			                             	derivation
{
int c;
public:
void mul(void);
void display(void);
};
void B:: get_ab(void)
{
a=5;b=10;
}

int B::get_a()
{
return a;
}
void B::show_a()
{
cout<<“a=“a<<“\n”;
}
void D::mul()
{
get_ab();
c= b*get_a();   //’a’ can’t be 						used directly
}
void D::display()
{ show_a();       //output ‘a’


cout<<“b=“<<b<<“\n”;
cout<<“c=“<<c<<“\n”;
}
int main()
{
D d;
//d.get_ab();    //won’t work
d.mul();
//d.show_a();   //won’t work
d.display();
//d.b=20;      //won’t work
d.mul();
d.display();
return 0;
}



