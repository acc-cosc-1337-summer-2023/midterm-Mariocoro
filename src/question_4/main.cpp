#include <iostream>
#include <limits>
#include "question4.h"
string get_factorial_sequence(int i) {
	string s = "";
	int c = 1;
	for (int n = 1; n <= i; n++) {
		s += to_string(n);
		if (n != i) {
			s += "x";
		}
		c *= n;
	}
	s += "=" + to_string(c);
	return s;
}
int main() {
	while (true) {
		int i = 0;
		cout << "Enter a number: ";
		if (!(cin >> i) && cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} else if (i >= 1 && i <= 10) {
			string x = get_factorial_sequence(i);
			cout << x << endl;
		}
	}
}