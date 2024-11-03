#include<iostream>
using namespace std;
class BC{
	public:
		void printBC(){
			cout<<"printing message in base class"<<endl;
		}
		void show(){
			cout<<"show() of base class"<<endl;
		}
};
class DC:public BC{
	public:
		void printDC(){
			cout<<"printing message in derived class"<<endl;
		}
		void show(){
			cout<<"show() of derived class"<<endl;
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"bptr points to base objects"<<endl;
	bptr->show();
	DC derived;
	bptr=&derived;
	cout<<"bptr now points to derived objects"<<endl;
	bptr->show();
	DC *dptr;
	dptr=&derived;
	cout<<"dptr is derived type pointer"<<endl;
	dptr->show();
	dptr->printDC();
	cout<<"using (DC*)bptr"<<endl;
	((DC*)bptr)->show();
	((DC*)bptr)->printDC();
	
}
