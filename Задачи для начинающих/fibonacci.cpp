#include <iostream>

	using namespace std;

	long long int fibo(int num) {
		int x = 1;
		int y = 0;
		int temp;

		while(num >= 0) {
			temp = x;
			x = x + y;
			y = temp;
			num--;
		}

		return y;
	}


	int main() {

		int n;
		cin >> n;

		cout << fibo(n);
	return 0;

	}


		