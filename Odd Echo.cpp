#include <iostream>
#include <string>
#include <vector>

int main() {
	int lineCount;
	std::string fooBar;
	std::vector<std::string> echoWord;

	std::cin >> lineCount;

	for (int i = 0;  i < lineCount; i++) {
		std::cin >> fooBar;
		echoWord.push_back(fooBar);
	}

	for (int i = 0; i < lineCount; i++) {
		if (i % 2 == 0) {
			std::cout << echoWord[i] + "\n";
		}
	}
}