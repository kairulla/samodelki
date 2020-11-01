#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "diskriminant.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////

double root_x1(double a, double b, double c, double d) {//Считает первый корень X1
    double x1;
    x1 = ((-1 * b + sqrt(d)) / 2 * a);
    return x1;
}
///////////////////////////////////////////////////////////////////////////////

double root_x2(double a, double b, double c, double d) {//Считает второй корень X2
    double x2;
    x2 = ((-1 * b - sqrt(d)) / 2 * a);
    return x2;
}
///////////////////////////////////////////////////////////////////////////////

double root_x(double a, double b, double c) {//Считает корень X
    double x;
    x = ((-1 * b) / (2 * a));
    return x;
}
///////////////////////////////////////////////////////////////////////////////

double denominator(double x); //Объявление функции вычисления дискриминанта

///////////////////////////////////////////////////////////////////////////////

int main() {//Здесь происходит ввод данных с клавиатуры
    double a, b, c, d, f, f1, f2, x, x1, x2, zn, zn1, zn2;
    cout << "a = ";
    cin >> a;
    cout << endl << "b = ";
    cin >> b;
    cout << endl << "c = ";
    cin >> c;
    cout << endl;
    ///////////////////////////////////////////////////////////////////////////////

    if (a != 0) {//Здесь собираются все корни числителя
        d = diskriminant(a, b, c);
        cout << "Дискриминант = " << d << endl << endl;
        if (d > 0) {
            x1 = root_x1(a, b, c, d);
            x2 = root_x2(a, b, c, d);
            cout << "x1 = " << x1 << endl << endl << "x2 = " << x2 << endl;
            if ((x1 != M_PI / 4) && (x2 != M_PI / 4)) {
                zn1 = denominator(x1);
                zn2 = denominator(x2);
                cout << endl << "Будет два значения знаменателя" << endl << endl
                        << "zn1 = " << zn1 << endl << endl << "zn2 = " << zn2 << endl;
            }
            if ((x1 == M_PI / 4) && (x2 != M_PI / 4)) {
                zn = denominator(x2);
                cout << endl << "Знаменатель один, потому что первый корень даёт нуль, поэтому используется корень два" << endl << zn << endl;
            }
            if ((x1 != M_PI / 4) && (x2 == M_PI / 4)) {
                zn = denominator(x1);
                cout << endl << "Знаменатель один, потому что второй корень даёт нуль, поэтому используется первый корень" << endl << zn << endl;
            }
        }
        if (d == 0) {
            x = root_x(a, b, c);
            cout << "Будет один корень, т.к. дискриминант равен нулю" << endl << endl << "x = " << x << endl;
            if ((x != M_PI / 4)) {
                zn = denominator(x);
                cout << endl << "Знаменатель один, потому что корней тоже один" << endl << endl << "zn = " << zn << endl;
            } else {
                cout << endl << "Нет решения, знаменатель равен нулю" << endl;
            }
        }
        if (d < 0) {
            cout << "Нет решения, потому что дискриминант меньше нуля" << endl;
        }
    } else {
        cout << "Ошибка, потому что А не может быть нулём" << endl;
    }
    //////////////////////////////////////////////////////////////////////////////
    return 0;
}

//////////////////////////////////////////////////////////////////////////////

double denominator(double x) {//Высчитывает знаменатель
    double sincos;
    sincos = sin(x) + cos(x);
    return sincos;
}
