#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
void main()
{
	cout << "Hur har din dag varit idag mellan 1-10?" << endl;
	string input;
	int svar = 1;
	cin >> input;
	while (true) {
		if (input == "10") {
			cout << svar10 << endl;
			break;
		}
		else if (input == "9") {
			cout << svar9 << endl;
			break;
		}
		else if (input == "8") {
			cout << svar8 << endl;
			break;
		}
		else if (input == "7") {
			cout << svar7 << endl;
			break;
		}
		else if (input == "6") {
			cout << svar6 << endl;
			break;
		}
		else if (input == "5") {
			cout << svar5 << endl;
			break;
		}
		else if (input == "4") {
			cout << svar4 << endl;
			break;
		}
		else if (input == "3") {
			cout << svar3 << endl;
			break;
		}
		else if (input == "2") {
			cout << svar2 << endl;
			break;
		}
		else if (input == "1") {
			cout << svar1 << endl;
			break;
		}
		else {
			cout << "Jag sa mellan 1-10" << endl;
			cin >> input;
		}
	}
	system("pause");
}