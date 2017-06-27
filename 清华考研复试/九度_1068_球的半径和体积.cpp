#include <iostream>
#include <cstdio>
#include <memory.h>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    double x0, y0, z0, x1, y1, z1;
    double ban, ti;
    double num;
    while(~scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &z0, &x1, &y1, &z1)){
        num = pow(abs(x0-x1), 2) + pow(abs(y0-y1), 2) + pow(abs(z0-z1), 2);
        ban = sqrt(num);
        ti = 4.0 / 3.0 * acos(-1) * pow(ban, 3);
        printf("%.3lf %.3lf\n", ban, ti);
    }

    return 0;
}
