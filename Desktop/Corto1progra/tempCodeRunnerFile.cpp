#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int min=1, max=27;
    int usuario;
    int variable=min+rand() % (max-min+1);
    cout <<"Ingresa un número de tu gusto";cin>>usuario;
    cout <<endl;
    while(true){
        if (usuario==variable)
        {
        cout <<"Felicidades adivinaste el numero"<<endl;
        break;
        }else {
            cout<<"Lastima, no adivinaste el numero sigue intentando";cin >> usuario;
        }
        
    }

    return 0;
}