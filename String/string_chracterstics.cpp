#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="welcome";
	cout << "Size = " << str.size() << endl;
	cout << "Length = " << str.length() << endl;
	cout << "Max Size = " << str.max_size() << endl;
	cout << "Empty:  "<< (str.empty() ? "yes" : "no") << endl;
	
    return 0;
}
