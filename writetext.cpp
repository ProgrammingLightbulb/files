#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   /*cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)*/

   ofstream file{"abc.txt"};

   if (file)
	file << a << " " << b << " " << c;
   else
	cout << "Error opening abc.txt" << endl;

   file.close();

   cout<<endl<<endl;
 
   return 0;
}
