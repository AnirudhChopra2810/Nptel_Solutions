#include<simplecpp>

int coff(int n, int r)
{
  if(r == 0) return 1;
  else if(r == n) return 1;
  else return coff(n -1, r - 1) + coff(n - 1, r );
}

main_program
{
  int n, r;
  cin >> n >>  r;

  cout << coff(n, r) << endl; 
}