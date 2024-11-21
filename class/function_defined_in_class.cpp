#include<iostream>
using namespace std;
class student{
	private:  //private data can be accessed only within class....outside the class it is not accessible
		int roll;
		string name;
	public:     // public data can be accessible outside the class
		void getdata(){
			cout<<"roll no:"<<endl;
			cin>>roll;
			cout<<"enter name:"<<endl;
			cin>>name;
		}
		void display(){
			cout<<"your roll no is = "<<roll<<endl;
			cout<<"your name is = "<<name<<endl;
		}
};
int main(){
	student s1;
	s1.getdata();
	s1.display();
	return 0;
}
