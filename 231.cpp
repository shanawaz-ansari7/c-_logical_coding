#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
while(true)
{
for(int shift = 0; shift < 10; shift++)
{
system("cls");

```
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 30; j++)
            {
                if((j + shift) % 10 == i * 2 ||
                   (j + shift) % 10 == 9 - i * 2)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }

        Sleep(150);
    }
}

return 0;
```

}
