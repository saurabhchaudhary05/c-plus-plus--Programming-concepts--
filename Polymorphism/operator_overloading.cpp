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
		void operator-(){
			x=-x;
			y=-y;
			z=-z;
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
