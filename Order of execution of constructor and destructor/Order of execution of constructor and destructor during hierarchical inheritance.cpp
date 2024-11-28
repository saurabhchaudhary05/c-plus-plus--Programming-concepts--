#include<iostream>
using namespace std;
class M
{
	protected:
		int m;
		public:
		M(int x)
		{
		    m=x;
		    cout<<"\nIn M";
		}
};
class N:public M
{
	protected:
		int n;
		public:
		N(int y):M(y)
		{
		    n=y;
		    cout<<"\nIn N";

		}
};

class P:public M
{
	int l;
	public:
		P(int p):M(p)
		{
		l=p;
		cout<<"\nIn P";
		}
};
int main()
{
	N obj1(1);//Output In M,In N
	P obj2(2);//Output In M,In P
	return 0;
}


