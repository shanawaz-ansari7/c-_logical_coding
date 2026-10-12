#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
            cout << j;

        for(int s=1; s<=2*(5-i); s++)
            cout << " ";

        for(int j=i; j>=1; j--)
            cout << j;

        cout << endl;
    }

    for(int i=4; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
            cout << j;

        for(int s=1; s<=2*(5-i); s++)
            cout << " ";

        for(int j=i; j>=1; j--)
            cout << j;

        cout << endl;
    }
}