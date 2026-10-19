#include<iostream>
using namespace std;

int main()
{
    int n = 7;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == i || j == n-i+1)
            {
                int value = (i <= n/2+1) ? i : n-i+1;
                cout << value << " ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}