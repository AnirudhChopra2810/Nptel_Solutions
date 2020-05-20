#include<iostream>
#include<functional>
using namespace std;

int accumulate(int n, function<int(int, int)> f)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = f(res, i);
	
		
	}
	return res;
}

int g(int res , int i )
{
	return i * res ; 
}

int s(int res, int i)
{
	return res + i;
}




int main()
{

	cout << accumulate(4, g) << endl;
	cout << accumulate(4, s) << endl;
}
