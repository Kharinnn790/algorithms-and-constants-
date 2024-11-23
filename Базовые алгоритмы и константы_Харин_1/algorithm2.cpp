#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // ��� std::count_if
using namespace std;

// ��������������� ������� ��� ��������, ���������� �� ������ �� 'A' ��� 'a'
bool startsWithA(const string& str) {
    return !str.empty() && (str[0] == 'A' || str[0] == 'a');
}

// �������� ������� ��� �������� �����, ������������ �� 'A' ��� 'a'
int CountStartsWithA(const vector<string>& xs) {
    return count_if(xs.begin(), xs.end(), startsWithA);
}

int main() {
    // �� ������� ���� main
    cout << CountStartsWithA({ "And"s, "another"s, "one"s, "gone"s, "another"s, "one"s, "bites"s, "the"s, "dust"s });
    return 0;
}
