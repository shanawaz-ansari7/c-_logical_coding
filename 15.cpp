#include <iostream>
using namespace std;
int main() {
    int x[]={1,2,3,5,6,3,9,7,2,9,8};
    int n=sizeof(x)/sizeof(x[0]);
    for(int i=0;i<n/2;i++) {
        int temp=x[i];
        x[i]=x[n-1-i];
        x[n-1-i]=temp;
    }
    for(int i=0;i<n;i++) cout << x[i] << " ";
    return 0;
}
