#include<simplecpp>

int main()
{
    char name[80];
    cin >> name;

    int l = 0, i = 0;

    while(name[l] != '\0')
    {
         l++;
    }

    for(int i = 0; i <= l; i++)
    {
        cout << name[l - i] ;
    }


}
