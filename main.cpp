#include <iostream>

int main() {
    using namespace std;
    setlocale(0, "rus");
    char string[] = "Hello 2023 year. ~3256��123";
    char* pstring;
    int count = 0;
    pstring = string;

    for (int i = 0; *(pstring + i); i++) {
        if (isdigit(*(pstring + i)) && (*(pstring + i) & 1) == 0) {
            count++;
        }
    }

    cout << "���������� ������ �����: " << count << endl;

    return 0;
}
