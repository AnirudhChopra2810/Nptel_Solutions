#include<iostream>
using namespace std;

template<typename T>
T bisection(T xl, T xr, T epsilon)
{
	bool xl_is_pos = (xl * xl   - 16) > 0;
	while (xr - xl >= epsilon)
	{
		double xm = (xl + xr) / 2;	
		bool xm_is_pos = (xm * xm  - 16) > 0;

		if (xl_is_pos == xm_is_pos) xl = xm;
		else xr = xm;
	}
	return xl;
}

int main()
{
	cout << bisection<double>(1, 16, 0.0001) << endl;
}