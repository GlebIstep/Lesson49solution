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



void sort_bubble(int array[], int length) {
	int flag = true;
	for (int j = 0; length < j; j++) {
		if (array[j] > array[j - 1]) {
			flag = false;
			int t = array[j];
			array[j] = array[j - 1];
			array[j - 1] = t;
		}
	}
	
	if (flag) {
		return;
	}


}


void sort_selected(int array[], int length) {
	int index = 0;

	for (int j = 1; j < length; j++) {
		if (array[j] > array[index]) {
			index = j;
		}
	}
}

void sort_selected(int array[], int length) {
	for (int i = 0; i < length; i++) {
		int index = i;
		for (int j = i + 1; j < length; j++) {
			if (array[j] > array[index]) {
				index = j;
			}
		}

		int t = array[index];
		array[index] = array[i];
		array[i] = t;
	}
}
void sort_inserted(int array[], int length) {
	for (int i = 0; i < length; i++) {
		int key = array[i];
		int j = i - 1;

		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}

		array[j + 1] = key;

	}

}

	
	
	
	

