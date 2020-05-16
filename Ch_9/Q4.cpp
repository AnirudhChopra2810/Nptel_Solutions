#include<simplecpp>

bool prime(int n )
{
   
  bool factorfound = false ;

  for(int i = 2 ; i < n ; i++ )
  {
    if(n%i == 0)
    {
      factorfound = true;
      break; 
    } 
  }
  return factorfound ;
}

main_program
{
  int n  ;

  cin >> n ;
  
  if(prime(n)) cout << n << " " << "is composite" << endl;
  else cout << n << " " << "is prime" << endl;

  
  
}
