#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, sum;
	cin >> n;
	vector<int> results;	// could pre-calculate results - faster for test cases that use most of valid range
	results.push_back(-1);	// results[i] = i^2

	while (n != 0) {

		sum = 0;
		for (int i = 1; i <= n; i++) {
			if (i == results.size()) {	// i^2 not yet stored
				results.push_back(i*i);
				sum += results[i];
			} else {			// use stored i^2 value
				sum += results[i];
			}
		}

		cout << sum << endl;
		cin >> n;
	}

return 0;
}
