#include<iostream>
using namespace std;
class X{
	public:
		int a;
		void f(int b){
			cout<<"The value of b is"<<b<<endl;
		}
};
int main(){
	int X::*ptiptr=&X::a;
	void(X::*ptfptr)(int)=&X::f;
	X xobject;
	xobject.*ptiptr=10;
	cout<<"the value of a is"<<xobject.*ptiptr<<endl;
	(xobject.*ptfptr)(20);
}
