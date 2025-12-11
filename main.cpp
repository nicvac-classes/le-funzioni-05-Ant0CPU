#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

void ordina(int n, vector<int> & v) {
    
    int i(0), j(0), t;
    bool scambi(true);

    while (i<=n-1 && scambi) {
        scambi=false;
        j=0;

        while (j<=(n-2)-i) {
            if (v[j]>v[j+1]) {

                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;

                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }
}

void stampa(int n, vector<int> & v) {
    int i;

    cout<<"Vettore: ";
    for (i=0; i<=n-1; i++) {
        cout<<v[i]<<"; ";
    }
    cout<<""<<endl;
}
int main() {

    srand(time(0));

    int c(5), i(0), j;
    vector<int> v(c), w(c);

    while (i<=c-1) {
        v[i]=rand() % (c*10)+1;
        w[i]=rand() % (c*10)+1;

        i++;
    }

    ordina(c, v);
    ordina(c, w);
    stampa(c, v);
    stampa(c, w);

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
