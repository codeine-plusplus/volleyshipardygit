#include <iostream>
#include "/public/colors.h"
using namespace std;
int main() {
	string a;
	string start;
	int score = 0;

	system("Color 16");
	cout << RED << "======================================================" << endl;
	cout << "=              " << CYAN << "** WELCOME TO JEOPARDY **(REMASTERED) " << RED << "=" << endl;
	cout << "=            " << CYAN << "** PLEASE ENTER A TO START **           " << RED << "=" << endl;
	cout << "======================================================" << endl << endl << endl;
	getline(cin, start);
	if (start == "a" or start == "A") {
		score += 0;
		cout << endl << endl << "LET'S A GO!" << endl << endl;
	} else {
		cout << endl << endl << endl << endl;
	}

	cout << YELLOW << "In plain English, what is this line of code doing?\nfloat number = 3.5" << endl;
	cout << endl;
	cout << WHITE << "A: It is making a variable named number of type float with a value of 3.5" << endl << "B: It is making a variable named number of type int with a value of 3.5" << endl << "C: It is making a variable of type number and also type float with a value of 3.5" << endl << "D: It is making a variable of type number named float with a value of 3.5" << endl;
	cout << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << GREEN << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << RED << "Wrong!" << endl << "Score: " << score << endl << endl;
	}


	cout << YELLOW << "I'm trying to read a value from the keyboard into a variable named x. What is wrong with this line of code:\ncin << x" << endl << endl;
	cout << WHITE << "A: It should be cin >> x; instead" << endl << "B: If you want to read from the keyboard you need to use cout, not cin" << endl << "C: You can't read from the keyboard in C++" << endl << "D: It is missing a semicolon at the end of the line" << endl;
	cout << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << GREEN << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << RED << "Wrong!" << endl << "Score: " << score << endl << endl;
	}


	cout << YELLOW << "A normal int has a range of approximately what values on our server?" << endl << endl;
	cout << WHITE << "A: -2 billion to 2 billion" << endl << "B: 0.0000001 to 2 billion" << endl << "C: -1x10^32 to 1x10^32" << endl << "D: -65,000 to 65,000" << endl << endl;
	getline(cin, a);
	if (a == "A" or a == "a") {
		score += 1;
		cout << GREEN << "Correct!" << endl << "Score: " << score << endl << endl;
	} else {
		cout << RED << "Wrong!" << endl << "Score: " << score << endl << endl;
	}

	cout << endl << endl << endl;

	cout << RED << "======================================================" << endl;
    cout << "=              " << CYAN << "** THANKS FOR PLAYING! **             " << RED << "=" << endl;
	cout << "=                                                    =" << endl;
    cout << "=       " << CYAN << "** You finished with a score of: " << GREEN << score << CYAN << "! **       " << RED << "=" << endl;
    cout << "======================================================" << RESET << endl << endl << endl;


}
