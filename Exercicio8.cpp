#include <iostream>

using namespace std;

int conta_primos(int *vet, int qtde);

int main(void) {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));

    int nPrimos = conta_primos(vetor, tamanho);

    cout << "\n\nForam encontrados " << nPrimos << " números primos." << endl;
    
    cout << endl;
    return 0; 
}

int conta_primos(int *vet, int qtde) {
    int count = 0;

    for (int i = 0; i < qtde; i++)
    {
        int divisores = 0;
        for (int j = 1; j <= vet[j]; j++)
        {
            if (vet[i] % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            count++;
        }
        
    }

    return count;
}