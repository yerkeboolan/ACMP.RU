#include <iostream>

	using namespace std;

	int main() {
		
		long int n;
		int c = 0;

		cin >> n;

		for(long int i = 1; i <= n; i++) {
			if(n % i == 0) c += i;
		}

		cout << c;

		return 0;

		}

