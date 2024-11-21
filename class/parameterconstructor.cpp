#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int breadth;
	public:
		rectangle(int length,int breadth);
		void display(){
			cout<<"area is:"<<length*breadth;
		}
};
rectangle::rectangle(int x,int y){
	cout<<"paramterized constructor is called"<<endl;
	length=x;
	breadth=y;
}
int main(){
	rectangle obj(4,5);
	obj.display();
	return 0;
}
