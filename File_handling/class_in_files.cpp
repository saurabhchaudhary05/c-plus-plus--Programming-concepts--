#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
char name[30];  

int roll_no;  
float marks;

void getdata()
{
cout<<"enter name: ";  
cin>>name;  
cout<<"enter rollno: ";  
cin>>roll_no;  
cout<<"enter marks: ";  
cin>>marks;
}
void putdata()
{
cout<<name;  
cout<<roll_no;  
cout<<marks;
}
};
int main()
{
student ob1,ob2;  
ob1.getdata();  
fstream file;
file.open("data12.txt",ios::in|ios::out);  
file.write((char*)&ob1,sizeof(ob1));
file.seekg(0);
file.read((char*) &ob1,sizeof(ob1));

//ob1.putdata();
}



