#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if((i-3)*(i-3) + (j-3)*(j-3) >= 7 &&
               (i-3)*(i-3) + (j-3)*(j-3) <= 12)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}