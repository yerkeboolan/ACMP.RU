#include <iostream>

	using namespace std;

	int main() {
		int f;
		cin >> f;
		       
		int a[f];

		for(int i = 0; i <= f; i++) {
			if(i == 0) a[i] = 0;
			else if(i == 1) a[i] = 1;
			else a[i] = a[i-1] + a[i-2];

		}

		cout <<a[f];


	return 0;

}

	