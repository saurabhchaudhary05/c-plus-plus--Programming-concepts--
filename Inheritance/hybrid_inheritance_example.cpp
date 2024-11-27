#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void geta()
			{	
				cout<<"enter a:"<<" ";
				cin>>a;
			}
			void puta()
			{
				cout<<"a:"<<a<<"\n";
			}
};
class B:public A
{
	protected:
		int b;
		public:
		void getb()
			{	
			geta();
			
				cout<<"enter b:"<<" ";
				cin>>b;
			}
			void putb()
			{
				puta();
				cout<<"b:"<<b<<"\n";
			}
};
class D
{
	protected:
		int d;
		public:
		void getd()
			{	
				cout<<"enter d:"<<" ";
				cin>>d;
			}
			void putd()
			{
				cout<<"d:"<<d<<"\n";
			}
};
class C:private B,private D
{
	protected:
		int c;
		public:
		void getc()
			{	
			getd();
			getb();
				cout<<"enter c:"<<" ";
				cin>>c;
			}
			void putc()
			{
				putd();
				putb();
				cout<<"c:"<<c<<"\n";
			}
};



int main()
{
	C obj1;
	obj1.getc();
	obj1.putc();
	return 0;
}



