// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 11/23/19

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string convertString(string stringToConvert) {
	string convertedString;
	vector<string> container;
	const char VOWELS[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
	bool isFirstLetterVowel = false;
	
	istringstream ss(stringToConvert);
	do {
		string word;
		ss >> word;
		container.push_back(word);
	} while (ss);

	for (int i = 0; i < container.size(); i++) {
		if (container[i] != "") {
			for (int j = 0; j < 10; j++) {
				isFirstLetterVowel = false;
				if (container[i].at(0) == VOWELS[j]) {
					isFirstLetterVowel = true;
					break;
				}
			}
			if (isFirstLetterVowel == true) {
				container[i].insert(container[i].size(), "ay");
				convertedString += (container[i] + " ");
			}
			else {
				container[i] += container[i].at(0);
				container[i].erase(0, 1);
				container[i].insert(container[i].size(), "ay");
				convertedString += (container[i] + " ");
			}
		}
	}

	return convertedString;
}

int main()
{
	string userInput, pigLatinString;

	cout << "Enter a sentence and I will convert it to Pig Latin." << endl;
	cout << "Type 'Exit' to quit the program." << endl;

	do {
		cout << "-> ";
		getline(cin, userInput);
		if (userInput == "exit" || userInput == "Exit") { break; }

		pigLatinString = convertString(userInput);

		cout << pigLatinString << endl;

	} while (userInput != "exit" || userInput != "Exit");
}
