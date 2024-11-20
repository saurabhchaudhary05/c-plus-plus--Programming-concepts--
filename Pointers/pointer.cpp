#include<iostream>
using namespace std;
int main(){
	int i=10;
	int *b=&i;
	int **c=&b;
	cout<<"address of i"<<&i<<endl;
	cout<<"address of b"<<b<<endl;
	cout<<"address of "<<*b<<endl;
	cout<<"address of "<<**c<<endl;
	cout<<"address of c "<<&c<<endl;
	cout<<"address of b "<<&b<<endl;
	cout<<"address of c "<<c<<endl;
}
