#include <iostream>

using namespace std;

void menu() {
	cout << "Christ to Buddha" << endl;
	cout << "	1) Christ year x" << endl;
	cout << "	2) Christ years x-x" << endl;
	cout << "Buddha to Christ" << endl;
	cout << "	3) Buddha year x" << endl;
	cout << "	4) Buddha years x-x" << endl;
	cout << "5) EXIT Program" << endl;
	cout << endl;

}

void main() {
	int year;
	int fromYear, toYear;
	int menuNumber;
	char to;

	do {
		menu();
		cout << "Select number then press ENTER : ";
		cin >> menuNumber;
		cout << endl;

		if (menuNumber == 1) {
			cout << "Chirst year = ";
			cin >> year;
			cout << "Buddha year = " << year + 543 << endl;
			break;
		} else if (menuNumber == 2) {
			cout << "Chirst year x-x = ";
			cin >> fromYear >> to >> toYear;
			cout << "Buddha year = " << fromYear + 543 << "-" << toYear + 543 << endl;
			break;
		} else if (menuNumber == 3) {
			cout << "Buddha year = ";
			cin >> year;
			cout << "Christ year = " << year - 543 << endl;
			break;
		} else if (menuNumber == 4) {
			cout << "Buddha year x-x = ";
			cin >> fromYear >> to >> toYear;
			cout << "Christ year = " << fromYear - 543 << "-" << toYear - 543 << endl;
			break;
		} else if (menuNumber == 5) {
			break;
		} else {
			cout << "Wrong number please select correctly number" << endl;
		}
	} while (menuNumber < 1 || menuNumber > 4);

	cout << endl;
	cout << "Thank you and Press any key to exit" << endl;
}