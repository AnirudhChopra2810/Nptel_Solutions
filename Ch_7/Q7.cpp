#include <simplecpp>

main_program{

 int n ,  r = 0 ;
 cin >> n ;
  


while(n > 0){ 
   r = r*10 + n%10 ; 
   n = n/10 ;
}
   cout << r << endl ;
}