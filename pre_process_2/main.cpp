#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "delen.h"
#define umnozh_ravno *=
#define i_plus_plus i++
#define ravno =
#define i_menshe_four (i < 4)
#define begin int main(){
#define end return 0;}

using namespace std;

begin
    double a ravno 0, b ravno 0;
    cout << "Введите A и B" << endl << "A = ";
    cin >> a;
    cout << endl << "B = ";
    cin >> b;
    cout << endl;

    unsigned int i ravno 1;
    double y ravno 1;

    while i_menshe_four {
        y umnozh_ravno delen(a, b, i);
        i_plus_plus;
    }

    cout << "Ответ" << endl << "Y = " << y << endl;

end
