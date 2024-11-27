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
	private:
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
class C:private B{
	private:
		int c;
	public:
	void getc(){
			getb();
			cout<<"enter c:"<<" ";
			cin>>c;
		}
		void putc(){
			putb();
			cout<<"c:"<<c<<endl;
		}
};
int main(){
	C obj;
	obj.getc();
	obj.putc();
}
