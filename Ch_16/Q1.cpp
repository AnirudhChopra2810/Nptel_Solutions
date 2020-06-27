#include<simplecpp>

int main()
{
   int x = 16, L = 10;
   int A[10] = {-1, 2, 2, 3, 10, 15, 15, 25, 28, 30};
   int last = L - 1, start = 0,  middle = (start + last)/2;


  while(start <= last)
  {
    if(A[middle] == x )
    {
     cout << "No. found" << endl;
     break;
    }
    else if(x < A[middle])
    {
       last = middle - 1;
    }
    else if(x > A[middle])
    {
       start = middle + 1;
    }
    middle = (start + last)/2;
  }

      if(start > last)
	{
	   cout<<  "No. not found" << endl;
	}

}
