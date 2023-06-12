#include <iostream>
using namespace std;

int main() {
	char string[] = { "JGMXCIJPAINKALNTHQNMA" };
	int size = sizeof(string);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1); j++) {
			if (string[j] > string[j + 1]) {
				char letter = string[j];
				string[j] = string[j + 1];
				string[j + 1] = letter;
			}
		}
	}
	cout << "Result: ";
	for (int i = 0; i < size; i++) {
		cout << string[i];
	}
	return 0;
}