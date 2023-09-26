#include <iostream>
#include <vector>

using namespace std;

float calc_serie(int N);

int main(void) {
    cout << "Resultado: " << calc_serie(5) << endl;
    cout << endl;
    return 0; 
}

float calc_serie(int N) {
    vector<float> numerador;
    vector<float> denominador;

    float s = 0;

    for (int i = 1; i <= N; i++)
    {
        numerador.push_back(i);
        if (i == N)
        {
            for (int j = 1; j < N; j++)
            {
                numerador.push_back(N - j);
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        denominador.push_back(N - i);
        if (N - i == 1)
        {
            for (int j = 2; j <= N; j++)
            {
                denominador.push_back(j);
            }
        }
    }

    int tamanho = numerador.size();

    //cout << "\n\nS = ";
    for (int i = 0; i < tamanho; i++)
    {
        s += numerador[i] / denominador[i];
        //cout << "(" << numerador[i] << " / " << denominador[i] << ")";

        /*if (i < tamanho-1)
        {
            cout << " + ";
        }*/
    } 

    //cout << " = " << s;

    cout << endl << endl;
    
    return s;
    
}