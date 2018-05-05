#include <iostream>

using namespace std;

int main()
{
    int n, v[100];

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            int sumai = 0, sumaj = 0;
            int copiei = v[i], copiej = v[j];

            while(copiei != 0){
                sumai = sumai + copiei % 10;
                copiei /= 10;
            }

            while(copiej != 0){
                sumaj = sumaj + copiej % 10;
                copiej /= 10;
            }

            if(sumai == sumaj){
                cout<<"("<<v[i]<<", "<<v[j]<<") cu suma: "<<sumai<<'\n';
            }
        }
    }
    return 0;
}
