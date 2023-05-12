#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char String[] = "Hello 2023 year. ~3256Ёё123";
	int count = 0;
	for (int i = 0; String[i]; i++) {
		if (((int)String[i] & 1) == 0) {
			cout << (int)String[i] << ' ';
			count++;
		}
	}
	cout << "Количество четных: " << count << endl;
	return 0;
}