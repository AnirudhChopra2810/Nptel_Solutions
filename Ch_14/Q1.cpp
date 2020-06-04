#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int  n = 6, sequence[] = { 5, 6, 5, 7, 6, 5 };
	bool isPalindrome = true;

	for (int i = 0; i < n / 2; i++)
	{
		if (sequence[i] != sequence[n - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome == true) cout << "Is palindrome" << endl;
	else if (isPalindrome == false)  cout << "Not palindrome" << endl;
}