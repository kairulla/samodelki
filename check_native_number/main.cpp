#include <iostream>

using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Введите целое положительное число: ";
    cin >> n;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    isPrime ? cout << "Это простое число" : cout << "Это не простое число";

// одинаковый по смыслу закомитил
//    if (isPrime)
//        cout << "Это простое число" << endl;
//    else
//        cout << "Это не простое число" << endl;

    return 0;
}