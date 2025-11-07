public class PowerCalculator {
    public static double power(double x, int n) {
        if (n == 0) {
            return 1.0;                  // Базовый случай: любое число в степени 0 равно 1
        }
        if (n < 0) {
            return 1.0 / power(x, -n);  // Отрицательная степень: обратное значение
        }
        if (n % 2 == 0) {
            return power(x * x, n / 2); // Для четной степени: (x^2)^(n/2)
        }
        return x * power(x, n - 1);     // Для нечетной степени: x * x^(n-1)
    }

    public static void main(String[] args) {
        double base = 2.0;
        int exponent = 10;
        System.out.println(base + "^" + exponent + " = " + power(base, exponent));
    }
}
// Результат: 2.0^10 = 1024.0
