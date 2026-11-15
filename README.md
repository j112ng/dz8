# Дз 8

##  Вариант 8

### Условие задачи
Вычислите с использованием цикла for значение для заданного N:
P = (cos(1)/sin(1)) * ((cos(1)+cos(2))/(sin(1)+sin(2))) * ... * ((cos(1)+...+cos(N))/(sin(1)+...+sin(N)))


### 1. Алгоритм и блок-схема

**Алгоритм:**
1. Начало.
2. Объявить переменные: N, sum_cos, sum_sin, proizvedenie.
3. Ввести значение N.
4. Инициализировать sum_cos = 0, sum_sin = 0, proizvedenie = 1.
5. Запустить цикл for от i = 1 до N.
6. Внутри цикла прибавить cos(i) к sum_cos и sin(i) к sum_sin.
7. Умножить product на отношение sum_cos / sum_sin.
8. После завершения цикла вывести значение proizvedenie.
9. Конец.

**Блок-схема:**

<img width="242" height="727" alt="laba8" src="https://github.com/user-attachments/assets/f7e96a73-7245-498a-9fc6-606368e592b1" />

### 2. Реализация программы

```c
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
```
### 3.Результаты работы программы
Случай 1:
Введите значение N: 1
Результат произведения: 0.642093
Случай 2:
Введите значение N: 3
Результат произведения: 0.020957

### 4. Информация о разработчике
Козлова София Сергеевна,бТИИ-261
