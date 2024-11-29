#include<iostream>
using namespace std;
class base{
	int a;
	int b;
	public:
		virtual void getc(){
			cout<<"enter a:"<<endl;
			cin>>a;
			cout<<"enter b:"<<endl;
			cin>>b;
			
		}
		virtual void show(){
			cout<<"a:"<<a<<endl;
			cout<<"b:"<<b<<endl;
		}
};
class derived:public base{
	int c;
	int d;
	 void getc(){
			cout<<"enter c:"<<endl;
			cin>>c;
			cout<<"enter d:"<<endl;
			cin>>d;
			
		}
		void show(){
			cout<<"c:"<<c<<endl;
			cout<<"d:"<<d<<endl;
		}
};
int main(){
	base *bptr;
	
	derived d;
	bptr=&d;
	bptr->getc();//virtual function binded at runtime(late binding)
	bptr->show();//non virtual function binded at compile time(early binding)*/
//	base *bptr;
	base a;
	bptr=&a;
	bptr->getc();
	bptr->show();
	
}
