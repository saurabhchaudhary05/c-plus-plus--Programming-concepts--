#include<iostream>
using namespace std;
class student{
	private:
		int length;
		int breadth;
	public:
		student(){
			cout<<"constructor is called"<<endl;
		length=9;
		breadth=7;
		}
		void area(){
			cout<<"area is:"<<length*breadth<<endl;
		
		}
};
int main(){
	student obj;
	obj.area();
	return 0;
}
