#include<iostream>
using namespace std;

int main()
{
    int n = 4;

    for(int i = 1; i <= 2*n-1; i++)
    {
        int stars = (i <= n) ? i : 2*n-i;

        for(int j = 1; j <= n; j++)
        {
            if(j <= stars)
                cout << "* ";
            else
                cout << "  ";
        }

        for(int j = 1; j <= n; j++)
        {
            if(j > n-stars)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}