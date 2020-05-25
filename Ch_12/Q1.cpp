double cube_root(double (*f)(double x), double y)
{
    double x = 1;

    while (abs(f(x) - y) > 0.001)
    {
        x = (x - y / x) / 2;
    }
    return x;
}


double cube(double x)
{
    return x * x * x;
}

int main()
{
 double y;
 cin >> y;
 cout << cube_root(cube, y) << endl;
}

