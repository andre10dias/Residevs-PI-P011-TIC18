#include <iostream>

using namespace std;

void calcula(int &x, int &y) {
    int aux = x;
    x += y;
    y = aux - y;
}

int main(void) {
    int x = 3, y = 2;

    calcula(x, y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    cout << endl;
    return 0; 
}