#include <iostream>
#include <string>

using namespace std;

int main() {

	int columns, rows;
	string message, reversedRow;
	string* messageRows;

	while(cin >> columns) {
		if (columns == 0) {
			break;
		}
		cin >> message;

		// count rows so rows can be stored
		if (message.length() % columns == 0) {
			rows = message.length() / columns;
		} else {
			rows = (message.length() / columns) + 1;	// ceil(length/columns)
		}
		messageRows = new string[rows];

		// store rows of encrypted message such that reading top-to-bottom then left-to-right gives unencrypted message
		for (int i = 0; i < rows; i++) {
			if (i % 2 == 1) {	// odd rows are right-to-left, reverse before storing
				reversedRow = message.substr(i*columns, columns);
				messageRows[i] = "";
				for (int j = columns-1; j >= 0; j--) {
					messageRows[i] += reversedRow[j];
				}
			} else {
				messageRows[i] = message.substr(i*columns, columns);	// store ith row
			}
		}

		// from stored rows, print characters in order of unencrypted message
		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < rows; j++) {
				cout << messageRows[j][i];
			}
		}
		cout << endl;
		delete []messageRows;
	}

	return 0;
}
