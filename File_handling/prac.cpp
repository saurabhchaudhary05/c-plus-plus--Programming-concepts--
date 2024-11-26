#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ofstream filestream("test.txt");
	if(filestream.is_open()){
		
		filestream.close();
	}
	string srg;
	ifstream win("test.txt");
	if(win.is_open()){
		while(win.eof()){
			
		}
		win.close();
	}
	int n;
	int a[50];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];	
	}
	float f=sum/n;
	if(n>=1 && n<=20){
		cout<<fixed<<setprecision(1)<<f;
	}
	else{
		cout<<fixed<<setprecision(1)<<f;
		cout<<"Exceeding limit!";
	}
}
