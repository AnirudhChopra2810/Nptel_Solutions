#include <simplecpp>

main_program{

 int n , D;
 cin >> n ; 

 while(D > 0  ){
   D = n % 10 ;
   cout << D << endl ;
   n = (n - n % 10)/10 ;
   D-- ;

 }

 
}
