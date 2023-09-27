#include <iostream>
#include <string>

using namespace std;

//Não consegui entender

void repeticao(char palavra[], int &verifica, char letra);

//Em construção

int main(void) {
    char palavra[] = {'A', 'p', 'a', 'r', 'e', 'c', 'i', 'd', 'a'};
    int tamanho = (sizeof(palavra) / sizeof(palavra[0]));
    int verifica[tamanho];
    char letra = 'a';
    repeticao(palavra, verifica, letra);
    cout << endl;
    return 0; 
}

void repeticao(char palavra[], int *verifica, char letra) {
    int tamanho = (sizeof(palavra) / sizeof(palavra[0]));
    int count = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == letra)
        {
            count++;
            verifica[i] = i;
        }
    }
    
    cout << "palavra: " << palavra;
    cout << "Letra: " << letra << endl;
    cout << "Aparições: " << count << endl;
    cout << "Posições: " << count;
    for (int i = 0; i < tamanho; i++)
    {
        cout << verifica[i] << "\t";
    }
    

}