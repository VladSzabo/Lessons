#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

int main()
{
    int m, x, y, nrEl = 0;
    int a[100], b[100];

    f>>m>>x>>y;

    for(int i=0;i<m;i++)
        f>>a[i];

    for(int i=0;i<m;i++)
        cout<<a[i]<<" ";
    cout<<'\n';

    for(int i=m-1;i>=0;i--){
        if(a[i] > x && a[i] < y){
            b[nrEl] = a[i];
            nrEl++;
        }
    }

    for(int i=0;i<nrEl;i++)
        cout<<b[i]<<" ";

    return 0;
}
