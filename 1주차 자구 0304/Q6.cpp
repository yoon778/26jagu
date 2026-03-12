#include <iostream>
using namespace std;

int printStar(int a) {
	if (a == 0) {
		return 0;
	}
	cout << "* ";
	printStar(a - 1);
	
}

int main() {
	int n; 
	cin >> n;
	
	printStar(n);
	return 0;
}
 