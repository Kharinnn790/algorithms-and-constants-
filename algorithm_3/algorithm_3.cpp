// algorithm_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "constants.h"
using namespace std;

int main() {
    double initialHeight;
    setlocale(LC_ALL, "Russian");
    // Запрашиваем у пользователя высоту башни
    cout << "Введите высоту башни: \n";
    cin >> initialHeight;
    if (initialHeight > 1000 || initialHeight < 0) {
        cout << "Ошибка! неверная высота башни! \n";
        cout << " \n";
        cout << "Увидемся в другой раз. \n";
        return 0;
    }
    // Выводим высоту мячика через 0, 1, 2, 3, 4 и 5 секунд
    for (int seconds = 0; seconds <= 5; ++seconds) {
        double height = calculateHeight(initialHeight, seconds);
        if (height > 0 || height < 1000) {
            cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters" << endl;
        }
        else {
            cout << "At " << seconds << " seconds, the ball is on the ground." << endl;
        }
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

//cout << " \n";
//setlocale(LC_ALL, "Russian");
//using namespace std;