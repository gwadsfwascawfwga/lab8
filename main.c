#include <stdio.h>

int main() {
    double a;
    int n;

    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите n: ");
    scanf("%d", &n);

    double sum = 0.0;
    double term = 1.0;

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            term = 1.0 / a;
        } else {
            term = term / (a + i);
        }
        sum += term;
    }

    printf("Результат = %lf\n", sum);

    return 0;
}
