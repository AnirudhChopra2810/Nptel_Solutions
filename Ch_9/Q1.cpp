#include<simplecpp>

int gcd(int m , int n)
{
  while(m%n != 0)
  {
    int remainder = m % n ;
    m = n ;
    n = remainder; 
  } 
  return n;
}

main_program
{
  int m , n ;
  cin >> m >> n ;
  cout << gcd(m , n) << endl ; 
}