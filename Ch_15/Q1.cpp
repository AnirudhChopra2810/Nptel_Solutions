#include<simplecpp>

//Array defined globally.
const char ones[10][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const char elevens[10][20] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                              "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const char tens[8][20] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

//Function defned to print number name less than hundred.
void getWord_LTH(int num)
{
   if(num <= 9) cout << ones[num] << endl;
   else if(num > 9 && num < 20) cout << elevens[num%10] << endl;
   else if(num >= 20 && num < 100)
   {
     if(num % 10 != 0) cout << tens[num/10 - 2] << ones[num%10] << endl;
     else cout << tens[num/10] << endl;
   }
}

/*
  *Function defined to print number name more than hundred,
  *but less than thousand.
*/
void getWord(int num)
{
  if((num >= 100) && (num%100 == 0)) cout << ones[num/100] << " " << " hundred" ;
  getWord_LTH(num % 100);
}

int main()
{
   int num;
   cin >> num;

   if((num >= 100) && (num  < 1000)) getWord(num);
   else getWord_LTH(num);
}
