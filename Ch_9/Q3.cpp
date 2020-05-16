#include<simplecpp>

double cube_root(double y )
{
   double xi = 1 ;

 while(abs(xi*xi*xi - y) > 0.001)
  {
     xi = (xi - y/xi)/2 ;
  }  
  return xi;
}

main_program
{
 double y  ;
 cin >> y ;
 cout << cube_root(y) << endl ; 
}