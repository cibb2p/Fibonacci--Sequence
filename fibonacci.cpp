/*

===========================
=	cibb2pwn@gmail.com    =
===========================

*/
#include <iostream>

using namespace std;

int fib(int n)
{
  if(1 == n || 2 == n)
  {
      return 1;
  }
  else
  {
      return fib(n-1) + fib(n-2);
  }
}

int main()
{
    double number;

    cout << "Enter nuber of sequence : ";
    cin >> number;

    for(int i=1; i<=number; i++)
    {
        cout << fib(i) << endl;
    }
    return 0;
}
