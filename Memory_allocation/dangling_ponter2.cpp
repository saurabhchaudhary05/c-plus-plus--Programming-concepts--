//Memory allocation/de-allocation at runtime(or Dynamic memory allocation/de-allocation) with solution 
#include <iostream>
using namespace std;
   int main () {
   int* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new int;   // Request memory for the variable
  *pvalue = 23;     // Store value at allocated address
    cout<<"Address where pointer is pointing before deletion:"<<pvalue<<endl;
   delete pvalue;         // free up the memory.
cout << "Address where pointer is pointing after deletion:"<< pvalue << endl;//Dangling pointer(Same address will be printed)
   pvalue=NULL;//pvalue is no longer a dangling pointer
cout<<"\n"<<pvalue;
   return 0;
}


