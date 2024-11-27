#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void geta(){
			cout<<"enter a:"<<" ";
			cin>>a;
		}
		void puta(){
			cout<<"a:"<<a<<endl;
		}
};
class B:private A{
	protected:
		int b;
	public:
		void getb(){
			geta();
			cout<<"enter b:"<<" ";
			cin>>b;
		}
		void putb(){
			puta();
			cout<<"b:"<<b<<endl;
		}
};
class C:protected A{
	private:
		int c;
	public:
		void getc(){
			 geta();
			 cout<<"enter c:"<<" ";
			cin>>c;
		}
		void putc(){
		
		 puta();
		cout<<"b:"<<c<<endl;
	}
};
int main(){
	B obj1;
	C obj2;
	obj1.getb();
	obj1.putb();
	obj2.getc();
	obj2.putc();
}
