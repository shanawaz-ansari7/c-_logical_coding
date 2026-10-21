#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            int d = (i-4)*(i-4) + (j-4)*(j-4);

            if(d >= 12 && d <= 20)
                cout << (i+j)%10 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}