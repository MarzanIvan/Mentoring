#include <iostream>

int main() {
    using namespace std;
    setlocale(0, "rus");
    char string[150] = "Hello 2023 year. ~3256��123";
    int count = 0;

    for (int i = 0; string[i]; i++) {
        if (isdigit(string[i]) != 0) {
            if (((string[i] - '0') & 1) == 0) {
                count++;
            }

        }
    }

    cout << "���������� ������ �����: " << count << endl;

    return 0;
}
