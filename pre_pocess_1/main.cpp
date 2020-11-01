#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#define writeln endl
#define celoe int
#define write cout
#define read cin

using namespace std;

double amount(double a);
double composition(double d, double m);

celoe main() {
    double a = 0, d = 0, m = 0, y = 0;//Объявил переменные
    write << "Введите параметры D, M, A" << writeln << "D = ";//Ввод данных
    read >> d;
    write << writeln << "M = ";
    read >> m;
    write << writeln << "A = ";
    read >> a;
    write << writeln;
///////////////////////////////////////////////////////////////////////////////
    
    y = composition(d, m) / amount(a); //Решение уравнения
    
    write << "Решение Y" << writeln << "Y = " << y << writeln; //Вывод решения
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////

double composition(double d, double m) {//Вычисляет числитель
    celoe k = 1;
    double result_composition = 0, result_multiply = 1;
    while (k <= 4) {
        result_multiply *= k + d;
        k++;
    }
    result_composition = result_multiply + m;
    return result_composition;
}
///////////////////////////////////////////////////////////////////////////////

double amount(double a) {//Высчитывает знаменатель
    celoe result_sum = 0, i = 1;
    double result_amount = 0;
    do {//Цикл вычисляет сумму
        result_sum += i + 5;
        i++;
    }    while (i < 4);
    result_amount = result_sum + a * a;

    return result_amount;
}
