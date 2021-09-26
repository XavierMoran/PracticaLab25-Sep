# PracticaLab25-Sep

#include <iostream>

using namespace std;

void contarIda(int n);
void contarVuel(int);

int main(void)
{
    int n;
    cout << endl;
    cout << "CONTEO DE NUMEROS" << endl << endl;
    cout << "HASTA QUE NUMERO CONTAR: ";
    cin >> n;

    contarIda(n);
    contarVuel(n);

    cout << endl;
    return 0;
}
void contarVuel(int n)
{
    if(n >= 1){
        cout << n << endl;
        n = n- 1;
        contarVuel(n);
    }
}
void contarIda(int n)
{
    int i;
    i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }
}
