#include <iostream>
using namespace std;
int main()
{
    //Se declaran las variables que se van a usar en int
    int n, ocho, cont=0;
    //se pide la variable de cantidad de numeros que el ususario dara
    cin >> n;
    //inicia un pequeño ciclo hasta completar la cantidad que el usuario dio
    for(int p=0; p<n; p++){
        //se pide cada numero que se comparara
        cin >> ocho;
        if(ocho==8){
            //si se logro encontrar aqui es donde cont hara su trabajo
            cont = 1;
        }
    }
    //Si muetra 0 no esta el 8, si esta 1 se encontro minimo una vez
    cout << cont;
    return 0;
}
