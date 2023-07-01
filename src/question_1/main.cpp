#include <string>
#include <iostream>
#include <limits>
#include <math.h>
using namespace std;

const char hexDigits[] = "0123456789ABCDEF";

string decimal_to_hex(int input) {
	string output;
	while (input != 0) {
		int mod = input & 15;
		output = hexDigits[mod] + output;
		input >>= 4;
	}
	return output;
}

int main() {
	while (true) {
		int i = 0;
		cout << "Enter a number: ";
		if (!(cin >> i) && cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} else if (i >= 1 && i <= 512) {
			cout << decimal_to_hex(i) << endl;
		}
	}
}