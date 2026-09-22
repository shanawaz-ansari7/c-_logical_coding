#include <iostream>
using namespace std;
int main() {
    int x[]={1,2,3,5,61,3,19,7,22,9,80};
    int n=sizeof(x)/sizeof(x[0]), count=0;
    for(int i=0;i<n;i++) if(x[i]>=10) count++;
    int y[11], j=0;
    for(int i=0;i<n;i++) if(x[i]>=10) y[j++]=x[i];
    for(int i=0;i<count;i++) cout << y[i] << " ";
    return 0;
}
