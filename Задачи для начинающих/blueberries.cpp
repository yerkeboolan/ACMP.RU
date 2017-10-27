#include <iostream>

	using namespace std;

	int main() {
		
		int n;
		cin >> n;

		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
	   	}

	   	int res;
	   	int c = 0;

	   	for(int i = 0; i < n; i++) {
	   		if(i == 0) 	res = a[n-1] + a[0] + a[1];
	   		else if(i == n-1) 	res = a[n-2] + a[n-1] + a[0];
	   		else res = a[i-1] + a[i] + a[i+1];

	   	if(res > c)		c = res;	
	   	}

	   	cout << c;

	   	return 0; 

	   	}

