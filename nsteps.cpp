#include <iostream>

using namespace std;

int main() {

	int lines, x, y;

	cin >> lines;

	for (int i = 1; i <= lines; i++) {
		cin >> x >> y;
		if (x == y || x-2 == y) {	// number located at these coordinates?
			if (x % 2 == 0) {
				cout << x + y << endl;
			} else {
				cout << x + y - 1 << endl;
			}
		} else {
			cout << "No Number" << endl;
		}
	}

	return 0;
}
