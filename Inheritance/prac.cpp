#include<iostream>
using namespace std;
class A{
	int a;
	int b;
	int c;
	public:
		void getA(){
			cout<<"enter a:"<<" ";
			cin>>a;
			cout<<"enter b:"<<" ";
			cin>>b;
			cout<<"enter c:"<<" ";
			cin>>c;
		}
		void showA(){
			cout<<"a:"<<a<<endl;
			cout<<"b:"<<b<<endl;
			cout<<"c:"<<c<<endl;
		}
};
class B:private A{
	int d;
	int e;
	public:
		void getDE(){
			getA();
			cout<<"enter d:"<<" ";
			cin>>d;
			cout<<"enter e:"<<" ";
			cin>>e;
		}
		void showDE(){
			showA();
			cout<<"d:"<<d<<endl;
			cout<<"e:"<<e<<endl;
		}
};
int main(){
	B obj1;
	obj1.getDE();
	obj1.showDE();
}
