
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfunc.h"

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

int square(double a, double b, double c, double* roots) {
    double discriminant = b * b - 4 * a * c;
    double* roots2 = malloc(2 * sizeof(double));
    
    if (discriminant >= 0) {
        roots[0] = (-b + sqrt(discriminant)) / (2 * a);
        roots[1] = (-b - sqrt(discriminant)) / (2 * a);
    } else {
        return 1;
    }

    return 0;
}
