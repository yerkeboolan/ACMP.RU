#include <iostream>

	using namespace std;

	int main() {
		int n;
		int zero = 0;
		int one = 0;

		cin >> n;

		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i]==0)
				zero++;
			else
				one++;

		}

		if(one > zero) {
			cout << zero;
		}
		else    {
			cout << one;


		return 0;

	}
}
	
	
