#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;

    cout<<"n = ";
    cin>>n;

    for(int i=1;i<=n;i++) {
        int elem = 0;

        for(int j=0;j<i;j++)
            elem = elem * 10 + 9;

        suma += elem;
    }

    cout<<"Suma este: "<<suma;
    return 0;
}
