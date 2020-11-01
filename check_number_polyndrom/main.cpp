#include <iostream>

using namespace std;

int main() {
    int n, reversed = 0, remainder, original;
    
    cout << "Введите целое число: ";
    cin >> n;
    
    original = n;
    
    //Вычисляем обратное число
    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    // Полиндром, если исходное число и обратное одинаковые
    original == reversed ? cout << original << " - полиндром\n" : cout << original << " - не полиндром\n";
    return 0;
}