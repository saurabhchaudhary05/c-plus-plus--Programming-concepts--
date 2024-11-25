#include<iostream>
using namespace std;
void test(int x)
{
	try
	{	if(x==1) throw x;		//int
		else if(x==0) throw 'x';		//char
		else if (x== -1) throw 1.0;	//double
		cout<<"End of try block";
	}
	catch(char c)				//catch 1
	{	cout<<"caught a character";}
	catch(int m)
	{	cout<<"caught an integer";}
	catch(double d)
	{	cout<<"caught a double";}
	cout<<"End of try-catch system";
 }

int main()
{
cout<<"testing multiple catches";
cout<<"x==1";
test(1);
cout<<"x==0";
test(0);
cout<<"x==-1";
test(-1);
cout<<"x==2";
test(2);	//does not throw any exception
return 0;			
}


