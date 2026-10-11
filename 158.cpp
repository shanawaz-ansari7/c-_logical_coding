#include<iostream>
using namespace std;

int main()
{
    int n=1;

    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            cout << n << "\t";
            n++;
        }
        cout << endl;
    }
}