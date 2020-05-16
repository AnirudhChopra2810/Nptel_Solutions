

#include <simplecpp>

main_program{

int m , n ;
cin >> m ;
cin >> n ;

while(m < 0){
if (m < 0) cout << "invalid number" << endl , cin >> m;
if(n < 0) cout << "invalid number" << endl , cin >> n ;
m++ ;
n++ ; 
}


while(m % n != 0){
   int Remainder = m % n ;
   m = n ;
   n = Remainder ;
}

cout << "The Gcd is: " << n << endl ;

}