#include<iostream>
using namespace std;
int main(){
	int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	int **ptr=p;
	cout<<&a<<" "<<*a<<endl;
	cout<<&p<<" "<<*p<<" "<<**p<<endl;
	cout<<&ptr<<" "<<*ptr<<" "<<**ptr<<endl;
}
