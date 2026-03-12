#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < (i + 1); ++j) {
			cout << j+1;
			Sleep(1000);
		}
		cout << endl;
	}
}