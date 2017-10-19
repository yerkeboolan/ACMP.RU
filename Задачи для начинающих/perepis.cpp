#include <iostream>

	using namespace std;

	int main() {
	
	int n;
	cin >> n;

	int a[2][n];

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}


	int age = a[0][n]
	int s = 1;   
	int maxage = 0;

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < n; j++) {
			if(age > maxage) 
				age = maxage;
			
		}
	}
	cout << maxage;	


	return  0;
	}