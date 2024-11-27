#include <iostream.h>
class student
{
protected:
	int roll_no;
public:
	void get_no(int);
	void put_no(void);
};
void student::get_no(int a)
{ Roll_no=a;}
void student ::put_no()
{ cout<<“Roll number is”<<roll_no;
}

class test : public student   //first level
{				    					 derivation
protected:
float sub1,sub2;
public:
	void get_marks(float,float);
	void put_marks(void);
};
void test::get_marks(float x,float y)
{ Sub1=x; sub2=y;}
void test::put_marks()
{ cout<<“Marks in sub1”<<sub1;
   cout<<“Marks in sub2”<<sub2;}
class result:public test    //second level 									 derivation
{ float total ;
   public:
	void display(void) ;}
Void result:: display(void)
{
Total= sub1+sub2;
Put_no();			//function of class student
Put_marks();			//function of class test
Cout<<“Total = “<<total;
}
Int main()
{
Result student1;
Student1.get_no(102);
Student1.get_marks(80.0,98.5);
Student1.display();
Return 0;
}


