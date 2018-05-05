#include <iostream>

using namespace std;

int main()
{
    int n, p, v[100];

    cin>>n>>p;
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n;i++){
        int copie = v[i], patrat = v[i] * v[i], este_auto = 1;

        while(copie != 0 && este_auto == 1){
            if(copie % 10 != patrat % 10){
                este_auto = 0;
            }

            copie /= 10;
            patrat /= 10;
        }

        if(este_auto == 1){
            for(int j=0;j<p;j++){
                n++;

                for(int k=n-1;k>i+1;k--)
                    v[k] = v[k-1];

                v[i+1] = v[i];
                i++;
            }
        }
    }


    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}
