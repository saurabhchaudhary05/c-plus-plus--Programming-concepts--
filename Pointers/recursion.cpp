#include<iostream>
using namespace std;
void display(){
	cout<<"hello world"<<endl;
	display();
}
int main(){
	display();
	return 0;
}
