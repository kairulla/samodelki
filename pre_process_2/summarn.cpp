#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

unsigned int summarn(unsigned int i) {
    unsigned int j = 1;
    unsigned int result_summarn = 0;
    do {
        result_summarn += i + j;
        j++;
    } while (j < 4);
    return result_summarn;
}
