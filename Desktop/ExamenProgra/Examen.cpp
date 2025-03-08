#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std; 

int main(){
    int  a = 0, b = 0, l=0;

    for (int i = 0; i <= 50; i += 2) {
        a += i;
    }
    cout << "La suma de los numeros pares hasta 50 es: " << a << endl;

    for (int o = 3; o <= 50; o += 3) {
        b += o;
    }
    cout << "La suma de los numeros impares hasta 50 es: " << b << endl;
    cout << endl;
    while (l <=33 ) {
        cout << l << " ";
        l += 3;
    }
    cout << endl;


}



