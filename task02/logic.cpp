#include "logic.h"

void print(string s) {
	cout << s;
}

string convert(int array[], int length) {
	string s = "";

	for (int i = 1; i < length; i++) {
		s += to_string(array[i]) + "";
	}
	return s;
}
void init_random(int array[], int length, int a, int b) {
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = 0; i < length; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}
}

