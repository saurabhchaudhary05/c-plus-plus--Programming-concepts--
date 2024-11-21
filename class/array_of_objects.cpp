#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		student(string name,int rollno);
		void display(){
			cout<<"name is:"<<name<<endl;
			cout<<"roll_no is:"<<rollno<<endl;
		}
};
student::student(string name1,int rollno1){
	cout<<"parameter constructor called"<<endl;
	name=name1;
	rollno=rollno1;
}
int main(){
	int n;
	cout<<"enter how many details u want:"<<endl;
	cin>>n;
	student a[n];
	string h;
	int m;
	for(int i=0;i<n;i++){
		cout<<"enter details:"<<end;
		cin>>h>>m;
		student a(h,m);
	}
	for(int i=0;i<n;i++){
		
		a[i].display();
	}
	
	student obj1("saurabh",13);
	student obj2("aryan",14);
	student obj3("boby",15);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
