#include <iostream>
using namespace std;

double power(double x, int n) {
    // Базовый случай: любое число в степени 0 равно 1
    if (n == 0) {
        return 1.0;
    }
    
    // Если степень отрицательная, преобразуем в положительную
    if (n < 0) {
        return 1.0 / power(x, -n);
    }
    
    // Если степень чётная, используем оптимизацию: x^(2k) = (x^2)^k
    if (n % 2 == 0) {
        return power(x * x, n / 2);
    }
    
    // Если степень нечётная: x^n = x * x^(n-1)
    return x * power(x, n - 1);
}

int main() {
    double x = 2.0;
    int n = 5;
    cout << x << "^" << n << " = " << power(x, n) << endl;
    return 0;
}
// 2^5 = 32
