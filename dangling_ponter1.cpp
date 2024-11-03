//When variable goes out of scope(Compile time memory allocation/de-allocation case) with solution
#include<iostream>
using namespace std;
int main()
{
   int *ptr;
   {
       int v=23;
       ptr = &v;
        cout<<"Address is(inside block):"<<ptr<<"\n";
   }
   // Here ptr is dangling pointer as v is no longer existing
        cout<<"Address is(outside block):"<<ptr;//ptr is dangling pointer(same address is printed)
       ptr=NULL;//Solution to dangling pointer(assign null address)
}


