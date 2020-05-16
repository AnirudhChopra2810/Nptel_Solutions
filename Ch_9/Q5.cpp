#include<simplecpp>

 double read_marks_into(int nextmark , int* S , int* C )
 {
   while(true)
   {
     if(nextmark < 0) break;
     *S = *S  + nextmark;
     *C = *C + 1;
     cin >> nextmark;
   } 
   return *S / *C;
 }

main_program
{
 int  nextmark , s = 0 , c = 0 ;
 cin >> nextmark;
 cout << read_marks_into(nextmark , &s , &c) << endl;
}
