#include <iostream>
using namespace std;
int main() {
    int x[]={1,20,3,1,61,3,19,7,61,9,80};
    int n=sizeof(x)/sizeof(x[0]), y[11], count=0;
    for(int i=0;i<n;i++) {
        int found=0;
        for(int j=0;j<count;j++)
            if(y[j]==x[i]) { found=1; break; }
        if(!found) y[count++]=x[i];
    }
    for(int i=0;i<count;i++) cout << y[i] << " ";
    return 0;
}
