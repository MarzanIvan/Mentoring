#include <iostream>
#include <cctype>

int main() {
    using namespace std;
    setlocale(0, "rus");
    char string[] = "Hello 2023 year. ~3256¨¸123";
    int count = 0;


    for (char* pstring = string; *pstring; pstring++) {
        if (isdigit(*pstring) && (*pstring & 1) == 0) {
            count++;
        }
    }

    cout << "Êîëè÷åñòâî ÷¸òíûõ ÷èñåë: " << count << endl;

    return 0;
}
