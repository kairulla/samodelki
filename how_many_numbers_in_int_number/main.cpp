#include <iostream>

using namespace std;

int main() {
    long long n;
    int count = 0;
    
    cout << "Введите целое число: ";
    cin >> n;
    
    while(n != 0) {
        // n = n / 10
        n /= 10;
        ++count;
    }
    
    cout << "Количество разрядов: " << count << endl;
    return 0;
}