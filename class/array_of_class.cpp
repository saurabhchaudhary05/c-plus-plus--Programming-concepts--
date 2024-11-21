#include<iostream>
using namespace std;
class student{
	int rollno;
	string name;
	public:
		void getdata(){
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter roll no"<<endl;
			cin>>rollno;
		}
		void putdata(){
			cout<<"name of student = "<<name<<endl;
			cout<<"rollno of studentv = "<<rollno<<endl;
		}
};
int main(){
	int n;
	cout<<"how many record u want to enter:"<<endl;
	cin>>n;
	student obj[n];
	for(int i=0;i<n;i++){
		cout<<"enter the record of "<<i+1<<" student "<<endl;    
		obj[i].getdata();
	}
	for(int i=0;i<n;i++){
		cout<<"record of "<<i+1<<" student:"<<endl;
		obj[i].putdata();
	}
}
