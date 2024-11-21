#include<iostream>
using namespace std;
class A{
	public:
		float radius ;
		float circle(){
			return 3.14*radius*radius;
		}
		
};
int main(){
	A obj1;
	obj1.radius=10;
	cout<<"radius = "<<obj1.radius<<endl;
	cout<<"Area of circle = "<<obj1.circle();
}
