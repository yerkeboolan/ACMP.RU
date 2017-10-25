#include <iostream>

	using namespace std;

	int main() {
		
	int a1, a2, number;
	cin >> a1 >> a2 >> number;
	int res = (a2 - a1) * (number - 1) + a1;

	cout << res;

	return 0;
	}

