#include<iostream>
#include"functions.h"
using namespace std;



bool even(int n)
{

    if (n == 0)
    {
        return true;
    }
    else return odd(n - 1);

}
