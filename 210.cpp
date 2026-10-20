#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 13; j++)
        {
            if(j % 4 == 1 || j % 4 == 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}