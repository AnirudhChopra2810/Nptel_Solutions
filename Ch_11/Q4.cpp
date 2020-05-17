#include<iostream>
using namespace std;

bool odd(int);

namespace myspace
{

    bool even(int n)
    {

        if (n == 0)
        {
            return true;
        }
        else return odd(n - 1);

    }

    bool odd(int n)
    {

        if (n == 0)
        {
            return false;
        }
        else return even(n - 1);

    }
}
int main()
{
    int n;
    cin >> n;
    if (myspace::even(n) == true) cout << "even" << endl;
    else cout << "odd" << endl;
 
}