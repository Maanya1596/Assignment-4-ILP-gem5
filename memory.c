#include <stdio.h>
int main(void) {
    static volatile int a[4096];
    long sum = 0;
    for (int i = 0; i < 10000; i++) {
        int j = (i * 17) % 4096;
        a[j] = i;
        sum += a[j];
    }
    printf("Memory result: %ld\n", sum);
    return 0;
}
