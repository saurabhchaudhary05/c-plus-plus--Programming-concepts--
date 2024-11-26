#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   char fname[20], ch;
   ifstream fin;                 // create an input stream

   cout << "Enter the name of the file: ";
   cin.get(fname, 20);
   cin.get(ch);
fin.open(fname, ios::in);     // open file
   if (!fin)                     // if fin stores zero, i.e., a false value
   {
      cout << "An error occurred in opening the file.\n";
      return 0;
   }
while (fin)                   // When eof is reached, fin equals 0
   {
      fin.get(ch);               // Read a character
      cout << ch;                // Display the character
   }
 return 0;
}

