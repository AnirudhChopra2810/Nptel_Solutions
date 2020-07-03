#include<simplecpp>

void _swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int _partition(int A[], int S, int L)
{
   int r, i, j;
   r = A[S];
   i = S;
   j = L;

   while(i < j)
   {
     while(A[i] <= r)
     {
       i++;
     }
     while(A[j] > r)
     {
       j--;
     }
     if(i < j) _swap(&A[i], &A[j]);
    }
    _swap(&A[S], &A[j]);
    return j;
}

void quick_sort(int A[], int S, int L)
{
   int pindex;
	if(S < L)
	{
	    pindex = _partition(A, S, L);

		quick_sort(A, S, pindex);
		quick_sort(A, pindex+1, L);
    }

}

int main()
{
  //int A[8] = {50, 15, 10, 60, 32, 5, 20, 31};
  int A[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

  quick_sort(A, 0, 8);

  for(int i = 0; i <= 8; i++ )
  {
     cout << A[i] << endl;
  }

}
