#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	int i,j,min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(arr[min],arr[i]);
		}
	}
}
int main(){
	int arr[15];
	int n,i;
	cout<<"enter the number of elements how much u want in an array"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int position;
	cout<<"enter the position at which u want u insert"<<endl;
	cin>>position;
	int value;
	cout<<"enter the value which u want to insert"<<endl;
	cin>>value;
	if(n==15 || n>15){
		cout<<"we can't insert "<<endl;
		
	}
	else{
		for(int i=n-1; i>=position-1;i--){
		arr[i+1]=arr[i];}
		arr[position-1]=value;
		n++;
	}
		for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	selectionsort(arr,n);
	cout<<"sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
