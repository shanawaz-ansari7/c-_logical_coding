#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            int d = (i-5)*(i-5) + (j-5)*(j-5);

            if((d >= 16 && d <= 25) ||
               (d >= 1 && d <= 4))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}