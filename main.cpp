#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    srand(time(0));

    int choice;

    cout << "=============================\n";
    cout << "   HIIII!\n";
    cout << "=============================\n";
    cout << "Выберите номер задачи (1–12):\n";
    cout << "1. Привет, Мир!\n";
    cout << "2. Сумма двух чисел\n";
    cout << "3. Обмен значениями\n";
    cout << "4. Калькулятор площади прямоугольника\n";
    cout << "5. Конвертер валют\n";
    cout << "6. Деление с остатком\n";
    cout << "7. Префиксный и постфиксный инкремент\n";
    cout << "8. Проверка числа\n";
    cout << "9. Логические выражения\n";
    cout << "10. Случайное число и его свойства\n";
    cout << "11. Калькулятор с оператором\n";
    cout << "12. Перевод секунд\n";
    cout << "-----------------------------\n";
    cout << "Введите номер: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        case 10: task10(); break;
        case 11: task11(); break;
        case 12: task12(); break;
        default: cout << "Неверный выбор!" << endl; break;
    }

    cout << "\n=============================\n";
    cout << "    HELLO :)\n";
    cout << "=============================\n";
    return 0;
}

void task1() {
    cout << "Задача 1: Привет, Мир!\n";
    string name, city;
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш город: ";
    cin >> city;
    cout << "\n" << name << endl << city << endl;
}

void task2() {
    cout << "Задача 2: Сумма двух чисел\n";
    int a = 5, b = 10;
    cout << "Сумма чисел: " << a + b << endl;
}

void task3() {
    cout << "Задача 3: Обмен значениями\n";
    int a = 15, b = 25, temp;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "После обмена: a = " << a << ", b = " << b << endl;
}

void task4() {
    cout << "Задача 4: Калькулятор площади прямоугольника\n";
    double length, width;
    cout << "Введите длину: ";
    cin >> length;
    cout << "Введите ширину: ";
    cin >> width;
    cout << "Площадь прямоугольника: " << length * width << endl;
}

void task5() {
    cout << "Задача 5: Конвертер валют\n";
    const double RATE = 90.5;
    double rub;
    cout << "Введите сумму в рублях: ";
    cin >> rub;
    cout << rub << " рублей = " << rub / RATE << " долларов" << endl;
}

void task6() {
    cout << "Задача 6: Деление с остатком\n";
    int num;
    cout << "Введите двузначное число: ";
    cin >> num;
    int tens = num / 10;
    int ones = num % 10;
    cout << "В числе " << num << ": десятков - " << tens << ", единиц - " << ones << endl;
}

void task7() {
    cout << "Задача 7: Префиксный и постфиксный инкремент\n";
    int x = 5;
    int result = ++x + x++;
    cout << "Результат выражения (++x + x++) = " << result << endl;
    cout << "Окончательное значение x = " << x << endl;
    cout << "Пояснение: сначала ++x увеличивает x до 6, затем x++ использует 6 и увеличивает x до 7." << endl;
}

void task8() {
    cout << "Задача 8: Проверка числа\n";
    int num;
    cout << "Введите число: ";
    cin >> num;
    cout << num << " - четное? " << ((num % 2 == 0) ? "Да." : "Нет.") << endl;
    cout << "Делится на 5? " << ((num % 5 == 0) ? "Да." : "Нет.") << endl;
    cout << "Принадлежит диапазону [10, 50]? " << ((num >= 10 && num <= 50) ? "Да." : "Нет.") << endl;
}

void task9() {
    cout << "Задача 9: Логические выражения\n";
    bool a = true, b = false, c = true;
    bool result = ((a && !b) || (c && !a)) && (b || !c);
    cout << "Результат выражения: " << (result ? "true" : "false") << endl;
}

void task10() {
    cout << "Задача 10: Случайное число и его свойства\n";
    int num = rand() % 100;
    cout << "Случайное число: " << num << endl;

    bool twoDigits = num >= 10 && num <= 99;
    bool divisible3and5 = (num % 3 == 0 && num % 5 == 0);
    int sumDigits = num / 10 + num % 10;
    bool lucky = (sumDigits == 7 || sumDigits == 13);

    cout << "Двузначное? " << (twoDigits ? "Да" : "Нет") << endl;
    cout << "Кратно 3 и 5? " << (divisible3and5 ? "Да" : "Нет") << endl;
    cout << "Счастливое число? " << (lucky ? "Да" : "Нет") << endl;
}

void task11() {
    cout << "Задача 11: Калькулятор с оператором\n";
    double a, b;
    char op;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите оператор (+, -, *, /, %): ";
    cin >> op;
    cout << "Введите второе число: ";
    cin >> b;

    switch (op) {
        case '+': cout << "Результат: " << a + b << endl; break;
        case '-': cout << "Результат: " << a - b << endl; break;
        case '*': cout << "Результат: " << a * b << endl; break;
        case '/':
            if (b == 0) cout << "Ошибка: деление на ноль!" << endl;
            else cout << "Результат: " << a / b << endl;
            break;
        case '%':
            if ((int)b == 0) cout << "Ошибка: деление на ноль!" << endl;
            else cout << "Результат: " << (int)a % (int)b << endl;
            break;
        default:
            cout << "Неизвестный оператор!" << endl;
    }
}

void task12() {
    cout << "Задача 12: Перевод секунд\n";
    long long seconds;
    cout << "Введите количество секунд: ";
    cin >> seconds;

    long long days = seconds / 86400;
    long long hours = (seconds % 86400) / 3600;
    long long minutes = (seconds % 3600) / 60;
    long long secs = seconds % 60;

    cout << days << ":"
         << (hours < 10 ? "0" : "") << hours << ":"
         << (minutes < 10 ? "0" : "") << minutes << ":"
         << (secs < 10 ? "0" : "") << secs << endl;
}
