#include <iostream>

	using namespace std;

	int getNontriviality(int n, int m) {
			int d;
			d = 19*m + (n + 239)*(n + 366) / 2;
			return d;
	}



	int main() {

	int t, n, m;
	cin >> t;
	int a[t];


	for(int i = 0; i < t; i++)  {
		cin >> n >> m;
		a[i] = getNontriviality(n, m);
	}

	for(int i = 0; i < t; i++) {
		cout << a[i] <<endl;
	}

return 0;
}

	


