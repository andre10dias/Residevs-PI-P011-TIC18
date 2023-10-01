#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string intercessao(string a, string b);

int main(void) {
    string a = "pescador";
    string b = "agricultor";

    string inter = intercessao(a, b);
    cout << "String com letras em comum: " << inter << endl;

    cout << endl;
    return 0; 
}

string intercessao(string a, string b) {
    int tam1 = a.size();
    int tam2 = b.size();

    vector<char> intercessao;
    char letra1;
    char letra2;

    
    for (int i = 0; i < tam1; i++)
    {
        letra1 = a[i];
        for (int j = 0; j < tam2; j++)
        {
            letra2 = b[j];
            if (int(letra1) == int(letra2))
            {
                if (intercessao.size() == 0 || count(intercessao.begin(), intercessao.end(), letra1) == 0)
                {
                    intercessao.push_back(letra1);
                }
            }
            
        }
    }

    string str = "";
    for (char c : intercessao)
    {
        str += c;
    }

    return str;
}