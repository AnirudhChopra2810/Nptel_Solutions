#include <iostream>
using namespace std;


void insert_sort(int a[], int n)
{
	int j, val, i;

	for (i = 1; i < n; i++)
	{
		val = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > val)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = val;

	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
	int a[3] = { 12, 11, 13 };
	insert_sort(a, 3);

}