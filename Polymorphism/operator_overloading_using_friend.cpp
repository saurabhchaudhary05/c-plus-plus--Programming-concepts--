#include<iostream>
using namespace std;
class abc{
	private:
		int x;
		int y;
		int z;
	public:
		abc(int a,int b,int c){
			x=a;
			y=b;
			z=c;
		}
		void display(){
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
		}
		friend void operator -(abc &s);
		void operator-(abc &s){
			s.x=-s.x;
			s.y=-s.y;
			s.z=-s.z;
		}
};
int main(){
	abc obj1(10,-20,30);
	cout<<"obj1:"<<endl;
	obj1.display();
	-obj1;
	cout<<"obj1:"<<endl;
	obj1.display();
	return 0;
}
