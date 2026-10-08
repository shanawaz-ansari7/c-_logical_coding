#include<iostream>
using namespace std;

int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int s=1;s<=5-i;s++)
            cout << " ";

        cout << char(64+i);

        if(i>1)
        {
            for(int s=1;s<=2*i-3;s++)
                cout << " ";

            cout << char(64+i);
        }

        cout << endl;
    }
}