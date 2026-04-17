#include <iostream>
using namespace std;

int main() {
	unsigned int n = 9;

	// inreasing triangle
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// decreasing triangle
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// right-aligned decreasing triangle
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// right-aligned increasing triangle
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// pyramid
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// inverted pyramid
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	// full diamond
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}cout << endl;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}

		for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
			cout << "*";
		}cout << endl;
	}cout << endl;

	return 0;
}