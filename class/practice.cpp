#include<iostream>
using namespace std;
class A{
	int x=10;
	public:
		void data(){
			cout<<x<<endl;
		}
};
int main(){
	A obj1;
	obj1.data();
//	cout<<obj1.data()<endl;
}
