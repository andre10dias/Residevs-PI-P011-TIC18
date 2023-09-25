#include <iostream>

using namespace std;

void ordenaCrescente(float &valor1, float &valor2, float &valor3, float &valor4) {
    float aux;

    if (valor1 > valor2)
    {
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
    }

    if (valor1 > valor3)
    {
        aux = valor1;
        valor1 = valor3;
        valor3 = aux;
    }

     if (valor1 > valor4)
    {
        aux = valor1;
        valor1 = valor4;
        valor4 = aux;
    }

    if (valor2 > valor3)
    {
        aux = valor2;
        valor2 = valor3;
        valor3 = aux;
    }

    if (valor2 > valor4)
    {
        aux = valor2;
        valor2 = valor4;
        valor4 = aux;
    }

    if (valor3 > valor4)
    {
        aux = valor3;
        valor3 = valor4;
        valor4 = aux;
    }
}

int main(void) {
    float valor1 = rand() % 20;
    float valor2 = rand() % 20;
    float valor3 = rand() % 20;
    float valor4 = rand() % 20;

    cout << "\nValores aleatórios:\n";
    cout << valor1 << "\t" << valor2 << "\t" << valor3 << "\t" << valor4;

    ordenaCrescente(valor1, valor2, valor3, valor4);

    cout << "\nValores ordenados:\n";
    cout << valor1 << "\t" << valor2 << "\t" << valor3 << "\t" << valor4;

    cout << endl;
    return 0; 
}