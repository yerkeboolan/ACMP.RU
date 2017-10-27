#include <iostream>
#include <cmath>

	using namespace std;
	
	int main() {
		
		int st, i, j, res;      
		cin >> st >> i >> j;
		                                      
		if(abs(i - j) - 1 < st - abs(i - j) - 1) 	 res = abs(i - j) - 1;
		else res = st - abs(i - j) - 1;

		cout << res;

		return 0;
		}


