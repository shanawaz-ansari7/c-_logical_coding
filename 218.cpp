#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            int d = (i-3)*(i-3) + (j-3)*(j-3);

            if(d >= 7 && d <= 12)
                cout << char('A' + (i+j)%26) << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}