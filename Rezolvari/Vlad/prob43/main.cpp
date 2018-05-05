#include <iostream>

using namespace std;

int main()
{
    int n, v[100], u[100], nrEl = 0;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n;i++){
        int este_prim = 1;

        if(v[i] == 1){
            este_prim = 0;
        }

        for(int j=2;j<v[i]/2;j++){
            if(v[i]%j == 0){
                este_prim = 0;
                break;
            }
        }

        if(este_prim == 1){
            u[nrEl] = v[i];
            nrEl++;
        }
    }

    for(int i=0;i<nrEl;i++)
        cout<<u[i]<<" ";
    return 0;
}
