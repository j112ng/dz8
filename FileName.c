#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "RUS");

    int N;
    printf("Введите значение N: ");
    scanf("%d", &N);

    double sum_cos = 0.0;
    double sum_sin = 0.0;
    double proizvedenie = 1.0;

    for (int i = 1; i <= N; i++) {
        sum_cos += cos(i);
        sum_sin += sin(i);
        proizvedenie *= (sum_cos / sum_sin);
    }

    printf("Результат произведения: %lf\n", proizvedenie);

    return 0;
}
