#include <iostream>
using namespace std;

int main(void){
    //int son 4 bytes 1 bytes son 8 bits int = 32 bits el maximo que un int puede representar es 2-1 elevado ala 32-1 = 2,147,483,650
    //iteracion es un looping, la pieza fundamental del for es un contador (i)
    //int i, o el for te deja declarar la i(variable) dentro del for y hay que inicializarlo y poner una condicion
    //int n = 10; //dato quemado;
    int n;
    cout<< "Hasta donde quieres contar:\n";
    cin>> n;
    for(int i = 1; i<= n; i = i + 1){
        //i++ == i = i + 1      i-- == i - i -1 (syntactic sugar);
    cout << i << "\n ";
    }

    return 0;
}
