#include <iostream>
using namespace std;
int main() {
	string a;
	int score = 0;
	cout << "in plain English, what is this line of code doing?\nfloat number = 3.5" << endl;
	cout << endl;
	cout << "A: It is making a variable named number of type float with a value of 3.5" << endl << "B: It is making a variable named number of type int with a value of 3.5" << endl << "C: It is making a variable of type number and also type float with a value of 3.5" << endl << "D: It is making a variable of type number named float with a value of 3.5" << endl;
	cout << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << "Wrong!" << endl << "Score: " << score << endl << endl;
	}


	cout << "I'm trying to read a value from the keyboard into a variable named x. What is wrong with this line of code:\ncin << x" << endl << endl;
	cout << "A: It should be cin >> x; instead" << endl << "B: If you want to read from the keyboard you need to use cout, not cin" << endl << "C: You can't read from the keyboard in C++" << endl << "D: It is missing a semicolon at the end of the line" << endl;
	cout << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << "Wrong!" << endl << "Score: " << score << endl << endl;
	}


	cout << "A normal int has a range of approximately what values on our server?" << endl << endl;
	cout << "A: -2 billion to 2 billion" << endl << "B: 0.0000001 to 2 billion" << endl << "C: -1x10^32 to 1x10^32" << endl << "D: -65,000 to 65,000" << endl << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << "Wrong!" << endl << "Score: " << score << endl << endl;
	}


}
