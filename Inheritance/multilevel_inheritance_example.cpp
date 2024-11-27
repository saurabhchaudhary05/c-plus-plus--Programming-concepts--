#include<iostream>
using namespace std;
class A{
	public:
		 void showa(){
			cout<<"i am in class A:"<<endl;
		}
};
class B:private A{
	public:
		void showb(){
			cout<<"i am in class B"<<endl;
			showa();
		}
};
class C:private B{

	public:
		
		void showc(){
		
		 cout<<"i am in class c"<<endl;
		 showb();
	}
};
int main(){
	C obj;
	obj.showc();
}
