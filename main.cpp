#include <iostream>
#include <cctype>

int main() {
    using namespace std;
    setlocale(0, "rus");
    char string[] = "Hello 2023 year. ~3256��123";
    int count = 0;


    for (char* pstring = string; *(pstring++); ) {
        if (isdigit(*pstring) && (*pstring & 1) == 0) {
            count++;
        }
    }

    cout << "���������� ������ �����: " << count << endl;

    return 0;
}
