#include<iostream>
using namespace std;

int main()
{
    int n = 17;

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i == 1 && j % 8 == 1) ||
               (i == 2 && j % 4 == 3) ||
               (i == 3 && j % 8 == 5))
                cout << char(64 + j);
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}