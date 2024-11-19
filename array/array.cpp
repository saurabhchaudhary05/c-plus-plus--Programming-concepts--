#include<iostream>
using namespace std;
int main(){
	int arr[50];
	int  n;
	cout<<"enter the no of elements in array:"<<" ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
