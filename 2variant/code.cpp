#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0) {
        return 1;                  // Базовый случай: любая степень нуля равна 1
    } else if (n % 2 == 0) {      // Проверка четности
        double y = power(x, n / 2); // Рассчитываем половину степени
        return y * y;              // Возвращаем квадрат получившегося значения
    } else {
        double y = power(x, n / 2); // Нечётный случай
        return y * y * x;          // Добавочное умножение на x
    }
}
