#include <iostream>
#include <vector>

using namespace std;

int reverse (int n) {

	int r, ten;
	vector<int> digits;

	while (n > 0) {
		digits.push_back(n%10);	// get least sig digit
		n /= 10;		// shift all digits right
	}

	// reassemble digits
	ten = 1;
	r = 0;
	for (int i = digits.size()-1; i >= 0; i--) {
		r += digits[i]*ten;
		ten *= 10;
	}

	return r;

}

int main() {

	int tests, n1, n2;

	cin >> tests;

	for (int i = 1; i <= tests; i++) {

		cin >> n1 >> n2;
		cout << reverse( reverse(n1) + reverse(n2) ) << endl;

	}

return 0;
}
