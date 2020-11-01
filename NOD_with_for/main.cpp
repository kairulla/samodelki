#include <iostream>

using namespace std;

int main() {
    int n1, n2, hcf;
    cout << "Введите два числа: ";
    cin >> n1 >> n2;
    
    //Меняем местами переменные n1 и n2, если n2 > n1
    if (n2 > n1) {
        int tesmp = n2;
        n2 = n1;
        n1 = tesmp;
    }
    for (int i = 1; i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    
    cout << "НОД = " << hcf << endl;
    return 0;
}