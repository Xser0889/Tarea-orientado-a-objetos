#include <iostream>
using namespace std;

int main(){

    int array[10]={2,4,2,3,6,7,3,2,5,7};

    try{
    for (int x = 0; x < 15; x++) {
        if (x > 9)
            throw "no hay expacio";
        cout << array[x] << endl;
    };
    }

    catch(const char *msg){
        cout << "Mensaje: " << msg << endl;
    }

}