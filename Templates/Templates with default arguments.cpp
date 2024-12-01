#include<iostream> 
using namespace std; 
template<class T, class U = char> class A 
{ 
public: 
	T x; 
	U y; 
}; 
int main() 
{ 
	A<float> a; 
	A<int, int> b; 
	cout<<sizeof(a)<<endl; 
	cout<<sizeof(b)<<endl; 
	return 0; #include <iostream>
using namespace std;
template<class T, int size>
class A
{
    public:
    T arr[size];
    void insert1()
    {
        int i =1;
        for (int j=0;j<size;j++)
        {
            arr[j] = i;
            i++;
        }
    }

} 

