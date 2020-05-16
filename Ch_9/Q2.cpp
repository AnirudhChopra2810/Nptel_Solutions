#include<simplecpp>

void polygon(int nsides, double sidelength)
{
   for(int i = 0 ; i < nsides ; i++)
   {
     forward(sidelength);
     right(360.0/nsides); 
     wait(1);
   }
   return;
}
int perimeter_of_polygon(double sidelength , int nsides)
{
   int i = 0 , P;
   while(i < nsides)
   {
    i = i + 1 ;  
   } 
   P = sidelength * i ;
   return P ;
}


main_program
{
 int sidelength , nsides  ;
 turtleSim();
 cin >> sidelength >> nsides ;
 polygon(nsides , sidelength) ;
 
 cout << perimeter_of_polygon(sidelength , nsides) << endl ;
}