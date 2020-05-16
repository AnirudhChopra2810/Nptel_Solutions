
#include<simplecpp>

u_long factorial(u_long n)
{
  if(n == 1) return 1;
  else return n*factorial(n - 1);
}

main_program
{
  int n;
  cin >> n;

  cout << factorial(n) << endl; 
}