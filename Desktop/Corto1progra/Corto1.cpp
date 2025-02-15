#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int min=1, max=27;
    int variable=min+rand() % (max-min+1);
    cout <<"Ingresa un número de tu gusto";cin>>variable;

    return 0;
}