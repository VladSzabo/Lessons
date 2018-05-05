#include <iostream>

using namespace std;

int main()
{
    int n, v[100], aparitii[100], este_permutare = 1;

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];

    for(int i=1;i<=n;i++)
        aparitii[i] = 0;

    for(int i=1;i<=n;i++)
        if(v[i] >= 1 && v[i] <= n)
            aparitii[v[i]] ++;
        else
            este_permutare = 0;

    if(este_permutare == 1){
        for(int i=1;i<=n;i++)
            if(aparitii[i] == 0 || aparitii[i] > 1)
                este_permutare = 0;
    }
    if(este_permutare == 1)
        cout<<"Sirul este permutare";
    else
        cout<<"Sirul nu este permutare";

    return 0;
}
