#include<iostream>
#include"functions.h"
using namespace std;

bool odd(int n)
{

    if (n == 0)
    {
        return false;
    }
    else return even(n - 1);

}