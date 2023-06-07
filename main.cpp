#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char string[] = { "JGMXCIJPAINKALNTHQNMA" };
	int size = sizeof(string) - 1;
	sort(string, string + size);
	cout << "Result: ";

	for (char letter : string) {
		cout << letter;
	}
	return 0;
}