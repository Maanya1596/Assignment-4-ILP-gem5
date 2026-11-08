#include <stdio.h>
int main(void) {
    volatile long x = 1;
    for (int i = 0; i < 10000; i++)
        x = (x * 3 + i) % 1000003;
    printf("Integer result: %ld\n", x);
    return 0;
}
