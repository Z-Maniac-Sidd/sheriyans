#include<stdio.h>

int fn(int n) {
    int x = 1;
    n = 5;
    if (n == 1)
        return x;

    for (int k = 1; k < n; k++) {
        x = x + fn(k) * fn(n - k);
    }

    return x;
}