#include <iostream>
#include <string>
using namespace std;
int main(){
    /*
    string palabra = "Hola mundo";

    cout << "Con lenght devuelve: " << palabra.length() << endl;

    cout << "Con size devuelve: " << palabra.size() <<  endl;

    //string user = "h";

    if (user.empty()){
        cout << "Ingrese un nombre";
    }else{
        cout << "Bienvenido " << user << endl;
    }

    cout<< "Esta vacio user?" << endl <<
    (user.empty() ? "Si" : "No");
    string fraseIncompleta = "Hola ";
    fraseIncompleta.append("Mundo");
    cout << fraseIncompleta;
    */
    string frase = "holaaaaaaaaaaa ";

    frase.insert(frase.length(), "putos");

    cout << frase;
}
