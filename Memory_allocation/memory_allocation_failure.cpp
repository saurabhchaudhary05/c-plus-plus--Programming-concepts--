#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int *p=NULL;
p=new int;
/*if(!p)
{
    cout<<"\n Memory allocation failure";
    exit(1);
}*/
if(p==NULL)
{
    cout<<"\n Memory allocation failure";
    exit(1);
}
return 0;
}
