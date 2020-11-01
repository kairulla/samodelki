#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "summarn.h"

double delen(double a, double b, double i) {
    double result_delen = 0;
    result_delen = (a + summarn(i)) / (a + b);
    return result_delen;
}
