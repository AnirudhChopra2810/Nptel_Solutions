#include<iostream>

int print(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
		cout << endl;
	}
}

int position_of_max(int A[], int L)
{
	int i = 1, max_index = 0;

	for (i = 1; i < L; i++)
	{
		if (max_index < A[i]) max_index = i;
	}
	return max_index;
}

void selection_sort(int A[], int N)
{
	for (int N; i > N; i--)
	{
		print(A, N);
		int max_index = position_of_max(A, i);
		float max_value = A[max_index];
		A[max_index] = A[i - 1];
		A[i - 1] = max_value;
	}
}

int main()
{
	float a[6] = { 35, 12, 29, 70, 18, 29 };
	selection_sort(a, 6);
	print(a, 6);
}