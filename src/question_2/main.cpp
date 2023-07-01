#include <iostream>
#include <limits>
#include "question2.h"
using namespace std;

int main(){
	while (true) {
		int i = 0;
		cout << "Enter a number: ";
		if (!(cin >> i) && cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} else {
			cout << get_fahrenheit(i) << endl;
		}
	}
}