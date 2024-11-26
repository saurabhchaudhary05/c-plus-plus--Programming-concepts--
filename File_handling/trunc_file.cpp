#include <iostream>  
#include <fstream>  
using namespace std;
int main()
{
string s;
fstream file2;  
file2.open("test2.txt",ios::out|ios::trunc);  
file2.close();




return 0;
}

