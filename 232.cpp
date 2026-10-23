#include <iostream>
using namespace std;

int main()
{
int n = 13;

```
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        if(i == 0 || j == 0 ||
           i == n-1 || j == n-1 ||
           i == 3 || j == 3 ||
           i == 6 || j == 6 ||
           i == 9 || j == 9)
            cout << "* ";
        else
            cout << "  ";
    }

    cout << endl;
}

return 0;
```

}
