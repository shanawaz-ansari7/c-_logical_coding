#include<iostream>
using namespace std;

int main()
{
    int n = 8;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == n-i+1 ||
               j == n-i+2 && i >= 3 ||
               j == n-i && i >= 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}