#include <iostream>
using namespace std;
int main()
{
    int n, ocho, cont=0;
    cin >> n;
    for(int p=0; p<n; p++){
        cin >> ocho;
        if(ocho==8){
            cont = 1;
        }
    }
    cout << cont;
    return 0;
}
