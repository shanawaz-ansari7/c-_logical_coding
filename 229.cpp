#include <iostream>
using namespace std;

int main()
{
for(int i = 1; i <= 3; i++)
{
for(int j = 1; j <= 25; j++)
{
if((i == 1 && j % 4 == 1) ||
(i == 2 && j % 4 == 3) ||
(i == 3 && j % 4 == 1))
cout << "*";
else
cout << " ";
}

```
    cout << endl;
}

return 0;
```

}
