#include <iostream>
using namespace std;

int main() {

  int i, n;
  int flag = 1;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    flag = 0;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }
try{
  if (flag==1){
  throw n;
}
  else
    cout << n << " is  not a prime number"<<endl;
    
}
   	
  
   catch(int n){
   	cout<<"prime input caused an exception";
   }

  return 0;
}

