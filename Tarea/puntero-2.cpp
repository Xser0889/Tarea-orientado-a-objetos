#include <iostream>
using namespace std;

int main(){
    int num[100],n,p;

    cout<< "Ingresa una cantidad de numeros: ";
    cin>>n;

    
    for(int i = 0; i<n; i++){
        cout<<"Ingresa los valores al arreglo: ";
        cin>>num[i];

        if(num[i] > p){
            p = num[i];
        }
    }

    int *pointer = &p;

    cout<<"\nEl valor mas grande en el arreglo es: " << *pointer << endl;

    return 0;
}