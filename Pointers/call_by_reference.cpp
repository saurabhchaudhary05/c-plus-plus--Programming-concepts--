#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a;
	cin>>b;
	swap(a,b);
	cout<<"value of a:"<<a<<endl;
	cout<<"value of b:"<<b;
}
void swap(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
	
}
