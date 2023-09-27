#include <iostream>
#include <string>

using namespace std;

char intercessao(string a, string b);

//Em construção

int main(void) {
    string a = "joana";
    string b = "pidamanhagaba";
    intercessao(a, b);
    cout << endl;
    return 0; 
}

char intercessao(string a, string b) {
    int tam1 = (sizeof(a) / sizeof(a[0]));
    int tam2 = (sizeof(b) / sizeof(b[0]));

    int tamanho = tam1 + tam2;

    char intercessao[tamanho];

    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            if (a[i] == b[j])
            {
                intercessao[i] = a[i];
            }
            
        }
        
    }

    cout << intercessao << endl;
}