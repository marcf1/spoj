#include <iostream>
#include <vector>

using namespace std;

int main() {

	int t, n, temp, tempIdx, num;
	bool print, unchanged;
	vector<int> list;

	cin >> t;

	for (int k = 1; k <= t; k++) {	// for each test case

		cin >> n;	// store permutation 
		list.push_back(-1);	// dummy element, so we can index from 1
		for (int i = 1; i <= n; i++) {
			cin >> num;
			list.push_back(num);
		}

		unchanged = true;

		for (int i = 1; i <= n; i++) {	// for each num in permutation

			print = true;

			while (list[i] != i) {		// while ith num in incorrect pos
				if (print == true) {		// in first while iteration, open bracket and flag permutation as changed
					cout << "(";
					print = false;
					unchanged = false;
				}
				cout << list[i] << " ";
				temp = list[i];			// swap ith num into correct pos
				list[i] = list[temp];
				list[temp] = temp;
			}

			if (print == false) {			// print final (correct) num in ith pos, close bracket
				cout << list[i] << ")";
			}
		}

		if (unchanged == true) {
			cout << "e";
		}

		list.clear();
		cout << endl;

	}

return 0;
}
