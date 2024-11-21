#include<iostream>
using namespace std;
class student{
	private:
		int fee;
		int roll;
	public:
		student(){
			cout<<"constructor is called"<<endl;
			roll=6;
			fee=9000;
		}
		void display(){
			cout<<"roll number:"<<roll<<endl;
			cout<<"fee is:"<<fee<<endl;
		}
};
int main(){
	student obj;
	obj.display();
	return 0;
}
