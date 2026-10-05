#include <iostream>
using namespace std;

int main()
{
    int n=13;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i==1 && (j==2 || j==6 || j==10)) ||
               (i==2 && (j==1 || j==3 || j==5 || j==7 || j==9 || j==11 || j==13)) ||
               (i==3 && (j==4 || j==8 || j==12)))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}