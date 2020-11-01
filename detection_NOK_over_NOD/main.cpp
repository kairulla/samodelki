#include <iostream>

using namespace std;

int main() {
    int n1, n2, hcf, temp, lcm;
    
    cout << "Введите два целых числа: ";
    cin >> n1 >> n2;
    
    hcf = n1;
    temp = n2;
    
    while(hcf != temp) {
        (hcf > temp) ? hcf -= temp : temp -= hcf; //можно и так записать, то что я закоминтировал ниже
        
//        if (hcf > temp)
//            hcf -= temp;
//        else
//            temp -= hcf;
    }
    
    lcm = (n1 * n2) / hcf;
    
    cout << "НОК = " << lcm;
    return 0;
}
