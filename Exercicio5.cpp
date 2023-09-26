#include <iostream>

using namespace std;

int insere_meio(int *vetor, int qtde, int elemento);

int main(void) {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));

    tamanho = insere_meio(vetor, tamanho, 100);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << "\t";
    }
    
    cout << endl;
    return 0; 
}

int insere_meio(int *vetor, int qtde, int elemento) {
    int meio = qtde / 2;

    qtde++;

    for (int j = qtde-1; j > meio; j--)
    {
        vetor[j] = vetor[j-1];
    }

    vetor[meio] = elemento;
    return qtde;
}