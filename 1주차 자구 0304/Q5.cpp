#include <iostream>

using namespace std;

void printStars(int& a) {
	for (int i = 0; i < a; ++i) {
		cout << "* ";
	}
}

int main() {
	int n;
	cin >> n;
	printStars(n);
}