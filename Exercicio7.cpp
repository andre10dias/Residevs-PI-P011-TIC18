#include <iostream>

using namespace std;

void multiplica_por_n(int *vetor, int qtde, int n);

int main(void) {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));
    int multiplicador = 10;

    multiplica_por_n(vetor, tamanho, multiplicador);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << "\t";
    }
    
    cout << endl;
    return 0; 
}

void multiplica_por_n(int *vetor, int qtde, int n) {
    for (int i = 0; i < qtde; i++)
    {
        vetor[i] *= n;
    }
}