#include <iostream>
using namespace std;

long fibonacci(long x)
{
   if((x == 1) or  (x == 0))
   {
      return x;
   }
   else
   {
      return fibonacci(x-1) + fibonacci(x-2);
   }
}

int main()
{
   long x , i = 0;
   
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x)
   {
      cout << " " << fibonacci(i);
      ++i;
   }

   return 0;
}