#include <iostream>
using namespace std;

int main() {
    int number, steps = 0;

    // Вводимо натуральне число
    cout << "Enter a natural number: ";
    cin >> number;

    // Перевіряємо, що число позитивне і не дорівнює нулю
    if (number <= 0) {
        cout << "The number must be positive and non-zero." << endl;
        return 1;  // Завершуємо програму, якщо введено некоректне число
    }

    // Виконуємо цикл до тих пір, поки number не стане рівним 1
    while (number != 1) {
        cout << number << endl;  // Виводимо поточне значення number

        // Якщо число парне, ділимо його на 2
        if (number % 2 == 0) {
            number /= 2;
        } else {  // Інакше, якщо число непарне, множимо його на 3 і додаємо 1
            number = 3 * number + 1;
        }

        steps++;  // Збільшуємо лічильник кроків
    }

    // Виводимо останнє значення 1 і кількість кроків
    cout << number << endl;
    cout << "Steps = " << steps << endl;

    return 0;
}