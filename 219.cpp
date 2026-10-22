#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
while(true)
{
for(int i = 1; i <= 20; i++)
{
system("cls");

```
        for(int j = 1; j <= i; j++)
            cout << " ";

        cout << "*****>" << endl;

        Sleep(100);
    }

    for(int i = 20; i >= 1; i--)
    {
        system("cls");

        for(int j = 1; j <= i; j++)
            cout << " ";

        cout << "*****>" << endl;

        Sleep(100);
    }
}

return 0;
```

}
