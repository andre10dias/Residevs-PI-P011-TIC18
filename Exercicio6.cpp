#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2);

int main(void) {
    int vet1[] = {0, 2, 4, 6, 8, 10, 12};
    int vet2[] = {1, 3, 5, 7, 9};

    int tam1 = (sizeof(vet1) / sizeof(vet1[0]));
    int tam2 = (sizeof(vet2) / sizeof(vet2[0]));

    int tamanho = tam1 + tam2;

    int* vet3 = intercala(vet1, tam1, vet2, tam2);

    cout << "\nValores intercalados:\n";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vet3[i] << "\t";
    }

    cout << endl << endl;
    return 0; 
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamanho = tam1 + tam2;
    int *vet3;

    vet3 = new int[tamanho];
    if (tam1 == tam2)
    {
        for (int i = 0, j = 0, x = 0; i < tamanho; i++)
        {
            if (i % 2 == 0)
            {
                vet3[i] = vet1[j];
                j++;
            }
            else 
            {
                vet3[i] = vet2[x];
                x++;
            }
        }
    }
    else
    {
        for (int i = 0, j = 0, x = 0; i < tamanho; i++)
        {
            if (i % 2 == 0)
            {
                if (j < tam1)
                {
                    vet3[i] = vet1[j];
                    j++;
                }
                else
                {
                    vet3[i] = vet2[x];
                    x++;
                }
            }
            else 
            {
                if (x < tam2)
                {
                    vet3[i] = vet2[x];
                    x++;
                }
                else
                {
                    vet3[i] = vet1[j];
                    j++;
                }
            }
        }
    }
    
    return vet3;
}