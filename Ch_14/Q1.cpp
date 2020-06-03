#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int  n = 5, sequence[] = { 5, 5, 5, 5, 6 };
	int flag = 0;

	for (int i = 0; i < n; i++)
	{
		if (sequence[i] == sequence[n - i - 1])
		{
			flag = 1;
		}
		else flag = 0;
	}

	if (flag == 1) cout << "No. is palindrome" << endl;
	else if(flag == 0)  cout << "No. is not palindrome" << endl;
} 