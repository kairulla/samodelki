#include <iostream>
using namespace std;

int main() {
    int n1, n2, LCM; //least common multiple
    cout << "Введите два целых числа: ";
    cin >> n1 >> n2;
    
    //Определяем максимум сред n1 и n2 и сохраняем в LCM
    LCM = (n1 > n2) ? n1 : n2; // 1 (логическое выражение) ? (если выражение истинно) : (если выражение ложно)
    //т.е. если n1 > n2 истина, то LCM = n1, а если n1 > n2 ложно, то LCM = n2
    
    //Бесконечный цикл
    while(1) {
        if (LCM % n1 == 0 && LCM % n2 == 0) {
            cout << "НОК = " << LCM << "\n";
            break;
        }
        ++LCM;
    }
    cout << endl;
    return 0;
} 