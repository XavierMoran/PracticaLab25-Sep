//PracticaLab25-Sep

#include <iostream>
using namespace std;

int mcd(int, int);
int main()

{
    int num1 = 0, num2 = 0;

    cout << "INGRESE EL PRIMER NUM POSITIVO MAYOR: " <<endl;
    cin >> num1;

    cout << "INGRESE EL SEGUNDO NUM POSITIVO MENOR: " <<endl;
    cin >> num2;

    cout << "EL MCD ES: " <<endl;
    cout << mcd(num1, num2);
    return 0;
}

int mcd(int a, int b)
{
    if(a < b) return mcd(b,a);
    if (b == 0) return a;
    return mcd(b, a % b);
}
