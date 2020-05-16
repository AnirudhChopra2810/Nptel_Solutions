#include <simplecpp>

main_program{
   int s = 0 , n , d ;
   char y ;

   cin >> n ;

   repeat(6){
      
      if(d == 11) y = 'J' ;
      else if(d == 12) y = 'Q' ;
      else if(d == 13) y = 'K' ;
      else if(d == 1)  y = 'A';
      else if(d > 13) s = s + 1 ;
      d = n - 13*s ;
   
      
}
   if ((s == 0) && (d > 10)) cout << y << " of clubs" << endl ;
   else if ((s == 0) && (d < 11)) cout << d << " of clubs" << endl ;
   else if ((s == 1) && (d > 10)) cout << y << " of diamonds" << endl ;
   else if ((s == 1) && (d < 11)) cout << d << " of daimonds" << endl ;
   else if ((s == 2) && (d > 10)) cout << y << " of hearts" << endl ;
   else if ((s == 2) && (d < 11)) cout << d << " of hearts" << endl ;
   else if ((s == 3) && (d > 10)) cout << y << " of spades" << endl ;
   else if ((s == 3) && (d < 11)) cout << d << " of spades" << endl ;  
}












































































































