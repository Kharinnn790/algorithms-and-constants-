#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для std::count_if
using namespace std;

// Вспомогательная функция для проверки, начинается ли строка на 'A' или 'a'
bool startsWithA(const string& str) {
    return !str.empty() && (str[0] == 'A' || str[0] == 'a');
}

// Основная функция для подсчета строк, начинающихся на 'A' или 'a'
int CountStartsWithA(const vector<string>& xs) {
    return count_if(xs.begin(), xs.end(), startsWithA);
}

int main() {
    // не меняйте тело main
    cout << CountStartsWithA({ "And"s, "another"s, "one"s, "gone"s, "another"s, "one"s, "bites"s, "the"s, "dust"s });
    return 0;
}
