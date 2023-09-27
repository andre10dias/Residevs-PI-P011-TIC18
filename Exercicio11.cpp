#include <iostream>
#include <string>

using namespace std;

void codifica(string &str);
void decodifica(string &str);

int main(void) {
    string frase = "Estruturas de Dados";

    cout << "Codificando: ";
    codifica(frase);
    cout << frase << endl << endl;

    cout << "Decodificando: ";
    decodifica(frase);
    cout << frase << endl;
    
    cout << endl;
    return 0; 
}

void codifica(string &frase) {
    int tamanho = frase.size();
    char vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        char letra = frase[i];

        switch (letra)
        {
            case 'Z':
                vetor[i] = 'A';
                break;

            case 'z':
                vetor[i] = 'a';
                break;

            case ' ':
                vetor[i] = ' ';
                break;
            
            default:
                vetor[i] = int(letra) + 1;
                break;
        }
    }

    frase = vetor;
}

void decodifica(string &frase) {
    int tamanho = frase.size();
    char vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        char letra = frase[i];

        switch (letra)
        {
            case 'A':
                vetor[i] = 'Z';
                break;

            case 'a':
                vetor[i] = 'z';
                break;

            case ' ':
                vetor[i] = ' ';
                break;
            
            default:
                vetor[i] = int(letra) - 1;
                break;
        }
    }

    frase = vetor;
}