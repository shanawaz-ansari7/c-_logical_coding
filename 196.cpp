#include<iostream>
using namespace std;

int main()
{
    int n = 5, k = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i % 2 == 1 && j == (i + 1) / 2) ||
               (i % 2 == 0 && (j == i / 2 || j == i / 2 + 1)))
                cout << k++ << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}