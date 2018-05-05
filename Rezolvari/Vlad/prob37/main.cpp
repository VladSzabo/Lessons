#include <iostream>

using namespace std;

int main()
{
    int n, v[100], nrEl = 0;

    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            v[nrEl] = j;
            nrEl ++;
        }
    }

    for(int i=0;i<nrEl;i++)
        cout<<v[i]<<" ";

    return 0;
}
