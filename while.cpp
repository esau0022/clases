#include <iostream>
using namespace std;
//while solo necesita la condicion, != no es igual, el while es para cuando no sabes cuantas vueltas o looping queres y el for es cuando si sabes cunatas vueltas queres dar
int main(){
    int dato;
    while(dato != -1)
    cout <<"Dame un numero\n";
    cin >> dato;
    cout <<"Me diste el" << dato << "\n";
    return 0;
}