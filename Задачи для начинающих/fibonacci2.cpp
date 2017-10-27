#include <iostream>

	using namespace std;

	int main() {
		int n;
		cin >> n;

		int a[10000];
		a[0] = 1;
		a[1] = 1;

		for(int i = 2; i <= 1200; i++) {
		a[i] = a[i-1] + a[i-2];
		if(n == a[i]) {
			cout << "1" <<"\n"<<i + 1;
			return 0;
		}
		}

		cout << "0";

		return 0;
		}

