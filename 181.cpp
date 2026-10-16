#include<iostream>
using namespace std;

int main()
{
    int k=10;

    for(int i=4; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k--;
        }

        cout<<endl;
    }

    return 0;
}