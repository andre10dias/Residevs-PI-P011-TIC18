#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = vetor[0];
    minimo = vetor[0];
    
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maximo)
        {
            maximo = vetor[i];
        }

        if (vetor[i] < minimo)
        {
            minimo = vetor[i];
        }
    }
}

int main(void) {
    int maximo, minimo, n;

    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "\n\nValores aleatórios:\n\n";
    for (int i = 0; i < n; i++)
    {
        vetor[i] = 1 + rand() % 20;
        cout << vetor[i] << "\t";
    }
    
    maxmin(vetor, n, maximo, minimo);

    cout << "\n\nMaior valor: " << maximo << endl;
    cout << "Menor valor: " << minimo << endl;

    cout << endl;
    return 0; 
}

/**
 * Tipos de coesão e acoplamento utilizados:
 * 
 * A coesão é do tipo comunicacional, pois a sequência de execuções ocorrem do mesmo lado, ou seja, 
 * utilizam a mesmo entrada ou saída. 
 * 
 * Já o acoplamento é o acoplamento de dados, pois os dados são passados por parâmetros.
*/