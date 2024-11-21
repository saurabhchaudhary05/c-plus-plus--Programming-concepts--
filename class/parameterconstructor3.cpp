#include<iostream>
using namespace std;
class rectangle{
	private:
		string name;
		int rollno;
	public:
		rectangle(string name,int rollno);
		void display(){
			cout<<"name is:"<<name<<endl;
			cout<<"roll_no is:"<<rollno<<endl;
		}
};
rectangle::rectangle(string name1,int rollno1){
	cout<<"parameter constructor called"<<endl;
	name=name1;
	rollno=rollno1;
}
int main(){
	rectangle obj1("saurabh",13);
	rectangle obj2("aryan",14);
	rectangle obj3("boby",15);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
