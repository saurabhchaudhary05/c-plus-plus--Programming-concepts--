#include<iostream>
using namespace std;
class A{
	private:
		int a;
		
	public:
		void fill();
			

};
void A::fill(){
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	cout<<"your number is: "<<a<<endl;
}
int main(){
	A obj1;
	obj1.fill();
	return 0;
}
