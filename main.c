#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 7, b = 10;
    int min, max;

    min = (a < b) ? a : b;
    max = (a > b) ? a : b;

    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);

    return 0;
}

