#include <iostream>
using namespace std;
int main(void){
    //string es una cadena de datos, las cadenas son caracteres compuestos
    //string nombre = "miguel";
    //cout << nombre[4] << "\n";

    //cout<< nombre.length(); 
    //.= operador de acceso

    //indexado, uso de indices ([]) miguel(012345)=indices
    string nombre
    cin >> nombre;
    for(int i=0; i<nombre.length(); i++){
        cout << nombre[i] << "\n";
    }

    return 0;
}