#include <iostream>  
#include <fstream>  
using namespace std;
int main()
{
char s[500]; 
ofstream fileout;  
ifstream filein;
fileout.open("data",ios::app);  
fileout<<"hello world";
fileout<<"next hello";  
fileout.close();

filein.open("data",ios::in);  
filein.getline(s,500);  
cout<<s;


return 0;
}

