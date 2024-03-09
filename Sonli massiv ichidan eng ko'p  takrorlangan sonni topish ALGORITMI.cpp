#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nechta son kerak: ";
    cin >> n;
    int sonlar[n];

    for(int i=0; i<n; i++){
        cin >> sonlar[i];
    }

    int K1=0;
    int K2=0;
    int S=sonlar[0];

    for(int i=0; i<n; i++){
        int T=sonlar[i];
        for(int j=0; j<n; j++){
            if(T==sonlar[j]){
                K1++;
            }
        }
        if(K1>K2){
            K2=K1;
            S=T;
        }
        K1=0;
    }

    cout << "Eng ko'p takrorlangan son - "; << S << endl;
    cout << "Bu son - " << K2 << " marta takrorlangan";
}
