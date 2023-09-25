#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2);

//Tá imprimindo endereço de memória

int main(void) {
    int tam1 = 5;
    int tam2 = 5;

    int vet1[] = {0, 2, 4, 6, 8};
    int vet2[] = {1, 3, 5, 7, 9};

    int tamanho = tam1 + tam2;
    int* vet3[tamanho];

    vet3[tamanho] = intercala(vet1, tam1, vet2, tam2);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vet3[i] << "\t";
    }
    

    cout << endl;
    return 0; 
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamanho = tam1 + tam2;
    int vet3[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        if (i % 2 == 0)
        {
            vet3[i] = vet1[i];
        }
        else 
        {
            vet3[i] = vet2[i];
        }
        
    }
    
    return vet3;
}