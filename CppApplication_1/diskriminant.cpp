#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

double diskriminant(double a, double b, double c) {// Высчитывает дискриминант
    double d;
    d = b * b - 4 * a * c;
    return d;
}