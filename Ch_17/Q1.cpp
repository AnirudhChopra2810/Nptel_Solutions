#include <simplecpp>

struct Store_dates
{
  int d;
  int m;
  int y;
};

bool isLeap(Store_dates year)
{
   if((year.y%4 == 0) && (year.y%100 != 0) || (year.y%400 == 0))
    {
       return true;
    }
    else return false;
}

bool Check_date(Store_dates x, Store_dates k, Store_dates z)
{
   if((z.y < 1800) || (z.y > 9999)) return false;
   if((k.m  < 1) || (k.m > 12)) return false;
   if(x.d < 1 || x.d > 31) return false;

   if(k.m == 2)
   {
     if(isLeap(z))
     {
       if(x.d <= 29)
       {
         return true;
       }
     }
      else return false;

       if ( k.m == 4 || k.m == 6 || k.m == 9 || k.m == 11 )
       {
         if(x.d <= 30)
            return true;
         else
            return false;
       }
       return true;


   }
}


int main()
{
  Store_dates x , k, z;
  x.d = 29;
  k.m = 2;
  z.y = 2020;
  if(Check_date(x, k, z)) cout << "valid" << endl;
  else cout << "not valid" << endl;
}















