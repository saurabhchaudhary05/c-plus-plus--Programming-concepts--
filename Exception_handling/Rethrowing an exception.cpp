 #include<iostream>
 using namespace std;
 void divide(double x, double y)
 {
  cout<<"Inside function";
  try 
 {
     if(y==0.0)
         throw y;        //Throwing double
     else
        cout<<" Division=  "<< x/y;
 }
 catch( double)     // Catch a double
 {
     cout<<" caught double inside function";
     throw;              // Rethrowing double
 }

 cout<<"end of function";
}
 int main()
 {
   cout<<"Inside main";
  try
  {
     divide(10.5,2.0);
     divide(20.0, 0.0);
  }
  catch(double)
 {
 cout<<"caught double inside main";
  }
  cout<<"end of main";
  return 0;
 }

