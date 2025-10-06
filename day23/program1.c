#include <stdio.h>
int main() {
    int i, j, num;
    float sum = 0.0;

    printf("Enter the number: \n");
    scanf("%d", &num);

    for (i = 1, j = 3; i <= num ; i++, j = j + 4) {
        sum = sum + (float)(i * 2) / j;
    }

    printf("Approximate sum: %.2f", sum);
    return 0;
}