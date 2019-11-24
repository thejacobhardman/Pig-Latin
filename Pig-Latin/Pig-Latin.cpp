// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 11/23/19

#include <iostream>
#include <string>

using namespace std;

string convertString(string stringToCovert) {
	string convertedString;



	return convertedString;
}

int main()
{
	string userInput, pigLatinString;

	cout << "Enter a sentence and I will convert it to Pig Latin." << endl;

	do {
		cout << "-> ";
		getline(cin, userInput);
		cout << userInput;
		if (userInput == "exit" || userInput == "Exit") { break; }

		pigLatinString = convertString(userInput);

		cout << pigLatinString << endl;

	} while (userInput != "exit" || userInput != "Exit");

	cout << endl;
}
