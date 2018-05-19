#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

int main()
{
    int n, v[100];
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
    //min1 va fi intodeauna cea mai mica valoare (ca si cum ar fi pe locul 1)

    f>>n;
    for(int i=0;i<n;i++)
        f>>v[i];

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<'\n';

    for(int i=0;i<n;i++){
        if(v[i] < min1){
            min3 = min2;
            min2 = min1;
            min1 = v[i];
        }
        else if(v[i] < min2){
            min3 = min2;
            min2 = v[i];
        }
        else if(v[i] < min3){
            min3 = v[i];
        }
    }

    for(int i=0;i<n;i++){
        if(v[i] == min1 || v[i] == min2 || v[i] == min3){
            for(int j=i;j<n-1;j++)
                v[j] = v[j+1];
            i--;
            n--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<'\n';

    return 0;
}
