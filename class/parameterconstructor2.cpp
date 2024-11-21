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
	name=name1;
	rollno=rollno1;
}
int main(){
	rectangle obj1("saurabh",13);
	obj1.display();
	rectangle obj2("aryan",14);
	obj2.display();
	rectangle obj3("boby",15);
	obj3.display();
	return 0;
}
