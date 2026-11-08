#include <stdio.h>
int main(void) {
    volatile double x = 1.0;
    for (int i = 0; i < 10000; i++)
        x = x * 1.000001 + 0.00001;
    printf("Floating-point result: %.6f\n", x);
    return 0;
}
