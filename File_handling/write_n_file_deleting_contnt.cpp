#include <iostream>  
#include <fstream>  
using namespace std;


int main()
{
	string s;
fstream filein;
filein.open("test.txt",ios::app);  
filein<<"world"; 
filein.close();

ifstream file1("test.txt",ios::in);
while(getline(file1,s)){
	cout<<s;
}


return 0;
}

